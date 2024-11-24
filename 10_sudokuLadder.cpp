#include<bits/stdc++.h>
using namespace std;
template<typename T>
class graph{
public :
map <T , list<T>>adj;
void addedges(T u , T v , bool bidir = false){
    adj[u].push_back(v);
    if(bidir) adj[v].push_back(u);
}
void print(){
    for(auto p : adj){
        cout << p.first << " ";
        for(auto neighbour : p.second){
            cout << neighbour <<  " ";
        }
        cout << endl;
    }
}
int SSSP(T src , T des){
    queue <T> q;
    unordered_map<T , bool>visited;
    unordered_map<T , int>distance;
    unordered_map<T , T>parent ;
    q.push(src);
    visited[src] = true;
    distance[src] = 0;
    parent[src] = src;
    while(!q.empty()){
        auto t = q.front();
        q.pop();
        for(auto child : adj[t]){
            if(!visited[child]){
                q.push(child);
                parent[child]= t;
                distance[child] = distance[t]+1;
                visited[child] = true;
            }
        }
    }
    T des_copy =  des;
    while(des!= src){
        cout << des << "<--- ";
        des = parent[des];
    }
    cout << des << endl;
    return distance[des_copy];
}
};
int main(){
    graph <int >g;
    int board[50] = {0};
    board[2]=13;
    board[5]=2;
    board[9]=18;
    board[18]=11;
    board[17]=-13;
    board[20]=-14;
    board[24]=-8;
    board[25]=-10;
    board[32]=-2;
    board[34]=-22;
    for(int u =0; u<=36; u++){
        for(int dice =1 ; dice<=6; dice++){
            int v = u +dice + board[u + dice];
            g.addedges(u,v, false);
        }
    }
    int ans = g.SSSP(0, 36);
    cout << " distance : " << ans << endl;
    return 0;
}
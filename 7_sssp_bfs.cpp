#include<bits/stdc++.h>
using namespace std;
template<typename T>
class graph{
public :
map<T , list<T>> adj;
void addedges(T u, T v , bool bidir = true){
    adj[u].push_back(v);
    if(bidir) adj[v].push_back(u);
}
void print (){
    for(auto p : adj){
        cout << p.first << " ";
        for(auto neighbour : p.second){
            cout << neighbour<< " ";
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
    graph<int>g;
    g.addedges(0 , 1);
    g.addedges(2 , 1);
    g.addedges(2 , 4);
    g.addedges(2 , 3);
    g.addedges(4 , 3);
    g.addedges(5 , 3);
    g.addedges(0 , 4);
    g.addedges(6 , 7);
    g.addedges(8 , 7);
    
    int ans = g.SSSP(0,5);
    cout << "distance : " << ans << endl;
    return 0;
}

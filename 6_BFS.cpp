#include<bits/stdc++.h>
using namespace std;
template<typename T>
class graph{
public :
map<T, list <T>> adj;
void addedges(T u , T v, bool bidir = true){
    adj[u].push_back(v);
    if(bidir) adj[v].push_back(u);

}
void print(){
    for(auto p : adj){
        cout << p.first << " : ";
        for(auto neighbour : p.second){
            cout << neighbour << " , ";
        }
    
}
}
void bfs( T src){
    queue <T> q;
    unordered_map< T , bool> visited;
    q.push(src);
   visited[src] = true ;
   while(!q.empty()){
    auto t = q.front();
    q.pop();
    cout << t << " ";
    for(auto child : adj[t]){
        if(!visited[child]){
            q.push(child);
            visited[child] =true ;
        }
    }
   }
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
    g.bfs(0);
    return 0;
}
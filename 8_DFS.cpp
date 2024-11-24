#include<bits/stdc++.h>
using namespace std;
template<typename T>
class graph{
public :
map < T, list<T>> adj;
void addedges(T u, T v, bool bidir= true){
    adj[u].push_back(v);
    if(bidir) adj[v].push_back(u);

}
void print(){
    for(auto p: adj){
        cout << p.first << " ";
        for(auto neighbour : p.second){
            cout << neighbour<< " ," ;
        }
        cout << endl;
    }
}
void dfs_helper(T src , unordered_map<T, bool>&visited){
    cout << src << " ";
    visited[src] = true;
    for(auto child : adj[src]){
        if(!visited[child]){
            dfs_helper(child, visited);
        }
    }
}
void dfs(T src){
    unordered_map<int , bool> visited;
    int component = 1;
    dfs_helper(src, visited);
    for(auto p : adj){
        if(!visited[p.first]){
            dfs_helper(p.first , visited);
            component++ ;
        }
    }
    cout << " componet : "<<  component << endl;
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
    
 g.dfs(0);
    return 0;
}

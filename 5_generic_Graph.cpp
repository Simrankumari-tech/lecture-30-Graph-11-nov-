// it means data is not integer
#include<bits/stdc++.h>
using namespace std;
class graph{
public :
map<string , list<string>> adj;
void addEdge(string u, string v, bool bidir = true){
    adj[u].push_back(v);
    if(bidir) adj[v].push_back(u);
}
void print(){
    for(auto p: adj){
        cout << p.first << ":" ;
        for(auto neighbour : p.second) {
            cout << neighbour<< ",";
        }
        cout << endl;
    }
}
};
int main(){
    graph g;
    g.addEdge("a" , "b");
    g.addEdge("d" , "b");
    g.addEdge("d" , "c");
    g.addEdge("d" , "e");
    g.addEdge("a" , "c");
    g.addEdge("a" , "d");
    g.print();
    return 0;
}
    
    

    
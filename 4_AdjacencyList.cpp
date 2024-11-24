#include<bits/stdc++.h>
using namespace std;
class graph{
public :
list<int> *l;
int n;
graph(int N){
    l = new list<int>[N];
    n= N;
}
void addEdge(int u,int v, bool bidir = true){
    l[u].push_back(v);
    if(bidir) l[v].push_back(u);
}

void print(){
    for(int i=0; i<n; i++){
        cout << i << " : " ;
        for(auto child : l[i]){
            cout << child << " , " ;
        }
        cout << endl;
    }
}
};
int main(){
    graph g(5);
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(1,4);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(4,3);
    g.print();
    return 0;
}

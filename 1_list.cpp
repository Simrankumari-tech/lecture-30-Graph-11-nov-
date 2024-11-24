#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l;
    l.push_back(4);
    l.push_back(7);
    l.push_back(8);
    l.push_front(3);
    // way-1 to print 
    list<int> :: iterator it;
    for(it = l.begin(); it!= l.end() ;it++ ){
        cout << *it << " " ;
    }
    cout << endl;
    // 2nd wayby using each loop
    for(auto p : l){
        cout << p<< " ";
    }
    return 0;

}

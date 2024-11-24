#include<bits/stdc++.h>
using namespace std;
int main(){
    // pair<string, int>p;
    // // way-1 to print pair
    // p.first = "mango" ;
    // p.second = 100;


    // way-2 to print pair
    // pair<string,int>p={"kiwi" , 78};

    // way-3 
    // pair<string , int>p;
    // p= make_pair("apple" , 34);

    list<pair<char , char>>l;
    l.push_back({'a' , 'b'});
    l.push_back({'a' , 'c'});
    l.push_back({'a' , 'd'});
    l.push_back({'b' , 'e'});
    l.push_back({'d' , 'e'});
    for(auto p: l){

    


    cout <<p.first << ", " << p.second<< endl;
    }
    return 0;
}
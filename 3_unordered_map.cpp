#include<bits/stdc++.h>
using namespace std;
int main(){
map<string, int>h;
h.insert(make_pair("mango", 34));
h["apple"] = 78;
h.insert(make_pair("kiwi" , 34));

for(auto p:h){
    cout << p.first << ", "<< p.second << endl;
}
return 0;

}
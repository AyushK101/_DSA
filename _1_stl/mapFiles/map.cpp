#include<bits/stdc++.h>
using namespace std;

void printMap( map<int,string> &m) {
    cout<<"size of map "<<m.size()<<endl;
    for( auto pr : m ) {  // pr is pair 
        cout<<pr.first<<" "<<pr.second<<endl; //! access -> O(logn)
    } //! loop => O(nlogn)
    cout<<endl;

}

int main() {
    map<int,string> m;
    m[1] = "sdf"; //? insertion -> o(logn)
    m[5] = "cdc";
    m.insert(make_pair(1,"dsf"));
    m.insert({4,"w"});

    //? print map using iterator
    // map<int,string> ::iterator it;
    // for( it = m.begin(); it != m.end(); it++) {
    //     cout<< (it->first) <<" "<< (it->second) <<endl;
    // }
    
    printMap(m);



}    
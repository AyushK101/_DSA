#include<bits/stdc++.h>
using namespace std;

int main() {
    map<int,int> m;
    m[3] = 5;
    m[1] = 4;
    m.insert({6,8});
    // find return iterator of x & if x not present then return m.end()
    auto it = m.find(6); //! O(logn)
    cout<< (it->second) <<endl;

    // erase value : input -> key OR iterator
    m.erase(1); //! O(logn)
    cout<<m[1];

    // with iterator
    if( it != m.end()) m.erase(it);

    // clear 
    m.clear();

    // time complexity dependency on keys
    map<string,string> M;
    M["sdfs"]="sdfs"; //! O(s.size()*log(n))









}
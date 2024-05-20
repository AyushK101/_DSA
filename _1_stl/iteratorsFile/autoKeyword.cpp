#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,56};
    auto a = 1;
    for(auto it=v.begin(); it != v.end(); it++) {
        cout<<*it<<" ";
    }
    cout<<endl;

    vector<pair<int,int>> v2 = { {1,2}, {3,4}};
    for(auto it=v2.begin(); it!=v2.end(); it++) {
        cout<<(it->first)<<" "<<(it->second)<<" "; 
    }
    cout<<endl;
    for(auto &value : v ) {
        cout<<value<<" ";
    }


}
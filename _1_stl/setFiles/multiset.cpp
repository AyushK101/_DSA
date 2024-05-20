#include<bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> ms;
    ms.insert(1); // O(log(n))
    ms.insert(1);
    for(auto it=ms.begin(); it != ms.end(); it++) {
        cout<<*it<<" ";
    }   
    auto it = ms.find(1); // O(log(n))
    ms.erase(it); // O(log(n))
    // after erase 
    cout<<"ds"<<endl;
    //! using erase with iterator delete only one while with value , it deletes all occurrences
    for(auto it=ms.begin(); it != ms.end(); it++) {
        cout<<*it<<" ";
    }   
}

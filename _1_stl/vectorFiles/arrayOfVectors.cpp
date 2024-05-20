#include<bits/stdc++.h>
using namespace std;

void printVec( vector<int> &v, int &n) { // can use &v to avoid copy 

    cout<< "size : " << v.size()<<"\n"; // O(1)
    for(int i=0; i<v.size(); i++) {
        cout<< v[i]<< " ";
    }
    cout<<endl;

    
}

int main() {
    int n; // total vector
    cin>>n;
    vector<int> v[n];
    for(int i=0; i<n; i++) {
        int y; // total element in a vector 
        cin>>y;
        for(int j=0; j<y; j++) {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0; i<n; i++) {
        printVec(v[i], n);
    }
}
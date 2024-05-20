#include<bits/stdc++.h>
using namespace std;

void printVec( vector<int> &v ) {
    int sizeOfEachVector = v.size();
    for(int i=0; i<sizeOfEachVector; i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main() {
    vector<vector<int>> v;
    int N;
    cin>>N;
    for(int i=0; i<N; i++) {
        int n; 
        cin>>n;
        vector<int> temp;
        for(int j=0; j<n; j++) {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for(int i=0; i<N; i++) {
        printVec( v[i]);
    }

}
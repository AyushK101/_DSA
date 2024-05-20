#include<bits/stdc++.h>
using namespace std;

void printVec( vector<pair<int,int>> &v , int &n) {

    for(int i=0; i<n; i++) {
        cout<< v[i].first << " " << v[i].second <<"\t";

    }
}



int main() {
    vector<pair<int,int>> v; // = { {1,2}, {3,4}, {5,6}, {7,8} };
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        int x , y;
        cin>>x>>y;
//? vector of pair
        v.push_back(make_pair(x,y)); // OR {x,y}
    }
    printVec(v, n);     

//? array of vector
    vector<int> v[10]; // created 10 vectors of size 0 
    



}

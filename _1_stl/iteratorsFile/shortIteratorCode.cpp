#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int,int> > v = { {1,2}, {3,4}, {5,5}};
    vector<int> v2 = {1,2,3,4};
    //? range based loop 
    //! NOTE: work on all containers
    for(int &value : v2) { // take copy value but actual with reference '&'.
        cout<<value<<" ";
    }
    cout<<endl;

    // for pair
    for( pair<int,int> value : v) {
        cout<<value.first<<" "<< value.second<<endl;
    }
    

}
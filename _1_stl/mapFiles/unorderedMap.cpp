#include<bits/stdc++.h>
using namespace std;

// 1. inbuilt implementation : hash tables
// 2. Time complexity : average insertion and access O(1)
// 3. 
void printMap( unordered_map<int,string> &um) {
    for( auto it : um) {
        cout<< it.first <<" "<<it.second<<endl;
    }

}

int main() {
    unordered_map<int,string> um;   
    um.insert({1,"a"});
    um[4]="d";
    um[2]="4";

    printMap(um);
    auto IT = um.find(2); // O(1)
    um.erase(IT); // O(1)



}
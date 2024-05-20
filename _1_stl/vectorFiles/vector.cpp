#include<bits/stdc++.h>
using namespace std;

void printVec( vector<int> v) { // can use &v to avoid copy 

    cout<< "size : " << v.size()<<"\n"; // O(1)
    for(int i=0; i<v.size(); i++) {
        cout<< v[i]<< " ";
    }
    cout<<endl;

    
}

int main() {

    // definition
    vector<int> v;
    
    // insertion 
    v.push_back(1);
    v.emplace_back(1); // faster 
    v.insert(v.begin(),300); // insert right of begin
    v.insert(v.begin()+1,2,5); // will insert two 5's in v[1]'s place


    vector<pair<int,float>> p; // vector of pairs
    p.push_back({1,2});  //!O(1)
    p.emplace_back(1,2);
    
    // given size
    vector<int> v1(10);  //with garbage value

    // filled values
    vector<int> v2(4,10);

    // copy 
    vector<int> v3(v);  // OR vector<int> v2 = v; //! O(n)
    // reference 
    vector<int> &v4(v); // OR vector<int> &v2 = v;

    // remove last value
    v.pop_back();

    // reverse end iterator : move in reverse
    auto it = v.rend(); 

    // rbegin iterator : just before v.begin()  
    auto it2 = v.rbegin(); 

    // erase : range erase
    v.erase(v.begin()+1, v.begin()+4);

    // swap vector 
    v.swap(v2);

    // clear 
    v.clear();

    // check empty 
    cout<<v.empty()<<endl;


    // allocation
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        
        //dynamic example 
        printVec(v);

        v.push_back(x); // insert value in end 
    }

    printVec(v);

}












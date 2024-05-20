#include<bits/stdc++.h>
using namespace std;

int main() {
    pair<int,string> p;
    
    // initialization
    p = make_pair(2,"hello");
    p = {2,"hello"};
    cout<< p.first << " " << p.second<<endl;

    // copying
    pair<int,string> p1 = p;
    cout<< p1.first<<endl;
    
    // referencing
    pair<int,string> &p2 = p;
    p2.first = 9;
    cout<< p.first<<endl;

    // useCase : a & b 's element related index-wise
    int a[] = {1,2,3};
    int b[] = {4,5,6}; // OR
    pair<int,int> p_array[3];
    p_array[0] = {1,4};
    p_array[1] = {2,5};
    p_array[2] = {3,6};
    for(int i=0; i<3; i++) {
        cout << p_array[i].first << " " << p_array[i].second << endl;

    }

    // example swap 
    swap(p_array[0],p_array[2]);
    for(int i=0; i<3; i++) {
        cout<<"\t"<< p_array[i].first << " " << p_array[i].second<<endl;
    }

    // input 
    pair<int,string> p3;
    cin>>p.first;
    cin>>p.second;
    cout<<p.first<<" "<<p.second<<"\n";
    

    


}
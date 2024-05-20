#include<bits/stdc++.h>
using namespace std;

// int main() {
//     unordered_set<string> s;
//     s.insert("dsf"); // O(1)
//     s.insert("23");
//     s.insert("sdf");
//     for(string it : s ) {
//         cout<<it<<endl;
//     }

//     auto it = s.find("23"); //O(1)


// }   

/*
given N strings and Q queries
In each query you are given a string 
Print yes if string is present 
else print no

N <=10^6
|S| <=100
Q <= 10^6

*/

int main() {
    unordered_set<string> s;
    int n;
    cin>>n;
    for( int i=0; i<n; i++) {
        string str;
        cin>>str;
        s.insert(str);
    }
    int q;
    cin>>q;
    while(q--)  {
        string str;
        cin>>str;
            if(s.find(str) == s.end()) {
                cout<<"NO"<<endl;
            } else {
                cout<<"YES"<<endl;
            }
        
    }
    
}
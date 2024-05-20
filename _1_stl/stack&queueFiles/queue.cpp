#include<bits/stdc++.h>
using namespace std;

int main() {
    // first in first out
    queue<int> q;
    q.push(1);
    q.emplace(5);
    q.back() +=4; // last went 
    q.front(); // first went 
    cout<<q.back()<<endl;
    cout<<q.front();

}
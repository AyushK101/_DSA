#include<bits/stdc++.h>
using namespace std;

int main() {
    // last in first out
    stack<int> st;
    st.push(1);
    st.emplace(2);

    cout<<st.top(); // last guy went in 
    st.pop(); // delete top one
    st.size();
    
}
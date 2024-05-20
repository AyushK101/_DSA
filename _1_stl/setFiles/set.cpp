#include<bits/stdc++.h>
using namespace std;

void printSet( set<string> &st) {
    for(string value : st) {
        cout<<value<<endl;
    }
    cout<<"\t";

    for(auto it=st.begin(); it != st.end(); it++) {
        cout<<*it<<endl;

    }

}

int main() {
    set<string> st;
    st.insert("a"); // O(log(n))
    st.insert("b");
    st.emplace("c");

    auto it = st.find("a");
    cout<<*it<<endl;

    auto IT = st.find("a");
    if( IT != st.end() ) {
        st.erase(it);
    }

    printSet(st); 
    



}   
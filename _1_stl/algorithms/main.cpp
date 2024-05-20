#include<bits/stdc++.h>
using namespace std;


bool comp( pair<int,int> p1, pair<int,int> p2) {    
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false; // then it swaps them 
    
    // they are same
    if(p1.first > p2.first) return true;
    return false;


}

int main() {
    // sort(start,end); // end don't include
    //ex: sort(v.begin(), v.end());

    // descending sort
    // sort(start,end, greater<int>);

    //! sort according to our own condition
    pair<int,int> a[] = { {1,2},{3,4},{5,6}};
    // sort according to second element of pairs
    // if they have same second element , then sort acc. to first element
    //todo: we use self written comparator
    // sort(a, a+n , comp);

    // count set bits (1)
    int n = 7;
    int cnt = __builtin_popcount(n);
    long long y = 10;
    int cntll = __builtin_popcountll(y);
    cout<<"cnt : "<<cnt<<" "<<"cntll : "<<cntll<<endl;

    // permutations
    // NOTE : for total permutations use stored value
    string s = "123";
    sort(s.begin(),s.end());
    do {
        cout<<s<<endl;
    } while( next_permutation(s.begin(),s.end()));
        // int maxi *= *max_element(a,a+n);



}

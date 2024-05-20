#include<bits/stdc++.h>
using namespace std;

// lexicographically order maintained queue OR MAX HEAP
int main() {
    priority_queue<int> pq;
    pq.push(10); //! O(log(n))
    pq.push(2);
    // pq = { 2, 10} 
    pq.pop(); // 10 //! O(log(n))
    pq.top();  //!O(1)


    //! minimum heap 
    priority_queue<int, vector<int>, greater<int>> PQ;
    // like descending priorityQueue

     
}
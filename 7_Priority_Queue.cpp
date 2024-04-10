/*A priority queue is a special type of queue in which each element is associated with a priority value. And, elements are served on the basis of their priority. That is, higher priority elements are served first.
However, if elements with the same priority occur, they are served according to their order in the queue.

Assigning Priority Value
Generally, the value of the element itself is considered for assigning the priority. For example,
The element with the highest value is considered the highest priority element. However, in other cases, we can assume the element with the lowest value as the highest priority element.
*/

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

// Declaring a priority queue -> priority_queue<datatype> name;
// Maximum heap or maximum priority queue is implemented using priority queue 
priority_queue<int>pq;
pq.push(5);//{5}
pq.push(2);//{5,2}
pq.push(8);//{8,5,2}
pq.emplace(10);//{10,8,5,2}

cout<<pq.top()<<" ";// Prints the top elements of the pq i.e. 10

// Minimum heap or minimum priority queue is implemented using priority queue 
priority_queue<int,vector<int>,greater<int>>pq;
pq.push(5);//{2}
pq.push(2);//{2,5}
pq.push(8);//{2,5,8}
pq.emplace(10);//{2,5,8,10}

cout<<pq.top()<<" ";// Prints the top elements of the pq i.e. 2

return 0;
}
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
// Declaring a queue-> queue<datatype>queuename
queue<int> q;
q.push(1);//{1}
q.push(2);//{1,2}
q.emplace(3);//{1,2,3}

// queuename.back() means the last element of the queue which is 3 in our case
q.back()+=5;// now 3 is been update to 8 by 3+5
cout<<q.back()<<" ";

// queuename.front() means that the first element of the queue will be accessed 
cout<<q.front()<<" ";

// Poping in queue is done by using the function queuename.pop()
q.pop();

return 0;
}
// Deque is a type of DS in which insertion & removal takes on the both end 
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
// Declaring deque    
deque<int>dq;

//Pushing function
dq.push_back(2);//{2}
dq.emplace_back(5);//{2,5}
dq.push_front(7);//{7,2,5}
dq.emplace_front(9);//{9,7,2,5}

//Poping function


return 0;
}
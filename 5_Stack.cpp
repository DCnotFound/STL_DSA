#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
// Declaring the stack    
stack<int>st;
// Pushing into the stack
st.push(1);//{1}
st.push(2);//{2,1}
st.push(3);//{3,2,1}
st.push(4);//{4,3,2,1}
st.push(5);//{5,4,3,2,1}
st.emplace(5);//{6,5,4,3,2,1} 

// Top of the stack -> stackname.top()
cout<<st.top()<<" ";

// Poping into the stack 
st.pop();//{5,4,3,2,1}
st.pop();//{4,3,2,1}
st.pop();//{3,2,1}

// Size of the stack -> stackname.size
cout<<st.size()<<" ";

// If the stack is empty or not [it returns true/false, true if it's empty and false if not]
cout<<st.empty()<<" ";

// Swaping of the stacks 
stack<int>st1,st2;
st1.swap(st2);
return 0;
}
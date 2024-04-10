#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
// Declaring a list
list <int>ls;
ls.push_back(2);//{2}
ls.emplace_back(4);//{2,4}

// Push in front 
ls.push_front(5);//{5,2,4}
ls.emplace_front(8);//{8,5,2,4}

return 0;
}
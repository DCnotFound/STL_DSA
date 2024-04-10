// Map is type of a container which stores everything with respect of keys and values
// Key can be of any data type and value also
// Key is always unique 
// Map store unique in sorted order
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

map<int, int> mpp;
map<int, pair<int, int>> mpp;
map< pair<int, int>, int> mpp;
mpp [1] = 2;// This means on the key 1 store value 2
mpp. emplace({3, 1});// key is 3 & value is 1; using  map<int, int> mpp;
mpp.insert({2, 4});// using map<int, int> mpp;
mpp[{2,3}] = 10;//key is (2,3) and the value is 10; using map< pair<int, int>, int> mpp;

for(auto it: mpp) {
cout << it.first << " " << it. second << endl;
}
cout <<mpp [1];
cout <<mpp [5];

return 0;
}
// Multiset is type of cobatiner in which multiple occureneces can occur i.e. non unique is allowed unlke set
// but it is sorted 
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

// Everything is same as set
// only stores duplicate elements also
multiset<int>ms;
ms.insert(1);
ms.insert(1);
ms.insert(1);
ms.erase(1);
int cnt = ms.count(1);
// only a single one erased
ms.erase(ms.find(1));//only deletes the one occurence of 1
// {1}
// {1, 1}
// {1, 1, 1}
// all 1's erased
ms.erase(ms.find(1), ms.find(1)+2);
// rest all function same as set

return 0;
}
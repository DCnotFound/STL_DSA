// Pair is a container which itself is a data type
#include<iostream>
using namespace std;
int main() {

// Creating a pair : pair<datatype_1,datatype_2>pair_name
pair<int,int>p={1,3};

// Printing the element of the pair : For 1st element-> pairname.first
//                                    For 2nd element-> pairname.second
cout<<p.first<<" "<<p.second<<endl; 

// Nested Pair ->
// Storing & printing more than 2 elements in the pair : pair<int,pair<int,int>>p -> will now store 3 data
pair<int,pair<int,int>>p1={1,{3,4}};
cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;

// Array of Pair
pair<int,int>arr[] = {{1,1},{2,3},{3,4}};
cout<<arr[0].first<<" "<<arr[0].second<<endl;
cout<<arr[1].first<<" "<<arr[1].second<<endl;
cout<<arr[2].first<<" "<<arr[2].second<<endl;

return 0;
}
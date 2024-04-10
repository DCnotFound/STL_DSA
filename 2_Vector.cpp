// Vector is a conatiner. Vector is dynamic in nature unlike array which is static
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

// Creating an Empty Vector : vector<datatype>vector_name;
vector<int>v; 

// Input an element in Vector : vectorname.push_back(data);
v.push_back(1);

// Input an element in vector using emplace_back
v.emplace_back(2);// Automatically inc the size of vector dynamically and place 2 next to 1

// Creating & inputing Vector of a Pair data type
vector<pair<int,int>>v1;
v1.push_back({1,2});
v1.emplace_back(3,4);// In emplace back you dont need curly bracket

// Declaring a prefilled/already filled Vector 
vector<int>vec2(5,100);// Vector of size 5 already defined with all elements being 100
vector<int>vec3(5);// Vector of size 5 already defined with all elements being 0 or garbage value 

// How to copy one vector to another 
vector<int>v2(v);// v2 will be a copy of v

// Accessing the elements of the vector 
   //Method 1: Just like array
     cout<<v[0]<<endl;
   //Method 2: Iterator : Syntax - > vector<datatype>::iterator iteratorname=vectorname.begin();

     vector<int>::iterator it=v.begin();//v.begin points to the mem locn of 1st element  
    it++;//Shifts to the next pos
    cout<<*(it)<<" ";
    it=it+2;//Shifts to next to next pos
     // What is v.end()
     vector<int>::iterator it=v.end();//Points to the memory location next to the last element

// Printing an entire vector 
  //Method 1: Long Method 
  for(vector<int>::iterator it=v.begin() ; it!=v.end() ; i++ ){
     cout<<*(it)<<" ";
    }
  //Method 2: Short Method 
    for(auto it:v){  // auto means the data type is automatically assigned by the computer
     cout<<it<<" ";
    }    

// Erase a Vector 
// {10,20,12,23,35}
v.erase(v.begin()+2,v.begin()+4); // {10,20,35} [Start,end)      begin+2 means 12 and begin+3 means 35                   

// Inserting in a Vector
  //Inserting at the begining of the vector
  vector<int>v=(2,100);//{100,100}
  v.insert(v.begin(),300);//{300,100,100}
  //Inserting at a particular position of the vector
  v.insert(v.begin()+1,2,10)//{300,10,10,100,100} +1 signifies the pos where you wanna insert and 2 signifies the number of times the data is inserted and 10 is the data that is being inserted
  // Insering a vector into a another vector
vector<int>copy=(2,50);//{50,50}
v.insert(v.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100}

// Size of vector -> vectorname.size();
cout<<v.size()<<endl;
return 0;
}
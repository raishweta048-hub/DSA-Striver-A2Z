//standard template library.cpp
//Covers algorithms,Containers,Funnction,Iterators in STL
//Date:17 Jan 2026

#include<iostream>//All libraries are automatically included if #include <bits/stdc++.h> is used.
#include<utility>
#include<vector>
using namespace std ;

int main(){
    //Pair can be treated as a datatpe and lies in the utility library.
    //Helps in defining containers.
    pair<int,int> p = {1,3}; //basic syntax of declaration of a pair.
    cout<<p.first<<" "<<p.second<<endl; //To acess variables from the pair.
   
    //To Store more than 2 variables, nested pair can be used.
    pair<int , pair<int , int>> pr= {1, {3,5}};
    cout<<pr.first<<" "<<pr.second.first<<" "<<pr.second.second<<endl;

    //Pair as an Array:
    pair<int , int> arr[] = {{1,2} , {2,5} , {6,7}};
    cout<<arr[0].first<<" "<<arr[1].second<<" "<<arr[2].first;

    //Vector container is used as it can be dynamically allocated and size can be increased whenever needed.
    vector<int> v; //This creates an empty container
    //To insert elements
    v.push_back(1); //It inserts the element in the last position of the vector.
    v.emplace_back(4); //Faster than push_back , does the same task.

    //Vector as a pair datatype
    vector<pair<int , int>>vec;
    vec.push_back({3,6});
    vec.emplace_back(1,5);
    //The diffrence both of them have here is of the syntax.

    //Declaration with size
    vector<int>v(5,100)  //{100,100,100.100,100}
    vector<int>v(5); //{0,0,0,0,0} or Garbage values
    vector<int>v1(4,23);
    vector<int>v2(v1); //This creates a copy of vector v1 in the form of v2.

    //To acess a vector
    v = {23,56,34,67,41}; //The same way as we do for Array.
    cout<<v[3]<<" "<<v[0];
    //By Iterators: It points towards the memory address of that element.
    vector<int>::iterator it = v.begin(); //v.begin prints the memory address.
    
    it++;
    cout<< *(it) <<" ";

    it = it + 2;
    cout<< *(it) <<" ";

    vector<int>::iterator it = v.endl(); //endl points to the next of last position in a vector

    vector<int>::iterator it = v.rendl(); //points at the end of the element attained after reversing the vector.

    vector<int>::iterator it = v.rbegin(); //points st the start of the element after reversing.

    cout<< v[0] <<" "<<v.at(0);
    cout<<v.back() <<" ";  //used to acess last element.

    //To print the entire vector
    for(vector<int>::iterator it = v.begin(); it!=v.end; it++)
    {
        cout<<*(it);
    }

    //Auto assignation helps to assign datatype automatically
    for(auto it = v.begin ; it!= v.end; it++)
    {
        cout<<*(it);
    }

    for(auto it : v){
        cout<<it<<" ";
    }

    //Deletion of vector
    //{10 , 20 , 30 , 40}
    v.erase(v.begin()+1);  //{10,30,40}

     //{10,20,12,23,35}  
    v.erase(v.begin()+2 , v.begin()+4);   //{10,20,35} {start,end)


    //Insert function
    vector<int>v(2,100);  //{100,100}
    v.insert(v.begin(), 300); //{300,100,100}
    vinsert.(v.begin() + 1,2,10); //{300,10,10,100,100}

    vector<int>v(2,30)
    v.insert(v.begin() , copy.begin() , copy.end()); //{30,30,300,10,10,100,100}

    //{23,56,34}
    cout<<v.size(); //3

    //{23,56,34}
    v.pop_back(); //Deletes the last element {23,56}

    //v1 --> {23,45}       v2-->{45,12}
    v1.swap(v2); //v1 --> {45,12}     v2-->{23,45}

    v.clear(); //erases entire vector
    cout<<v.empty();




    void explainList(){
        list<int> ls;
        ls.push_back(3); //{3}
        ls.emplace_back(2); //{3,2}
        ls.push_front(5); //{5,3,2}
        ls.emplace_front(); //{3,2}

        //rest functons same as vector
        //begin , end , rbegin , rend, clear , insert , size , swap
    }

//Date:17 Jan 2026
//standard template library.cpp
//Covers algorithms,Containers,Funnction,Iterators in STL

//Date:21 Jan 2026
//Covers Stacks,Queue,PriorityQueue ,Sets

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

    void explainDequeue(){

        deque<int>dq;
        dq.push_back(1); //{1}
        dq.emplace_back(2); //{1,2}
        dq.push_front(4); //{4,1,2}
        dq.emplace_front(3); //{3,4,1,2}

        dq.pop_back(); //{3,4,1}
        dq.pop_front(); //{4,1}

        dq.back();


        dq.front();

        //rest functiion are same as vector
        //begin,end,regin,rend,clear,insert,size,swap
    }

    void explainStack(){
        stack<int>st;
        st.push(1);  //{1}
        st.push(3);  //{3,1}
        st.push(4);  //{4,3,1}
        st.push(5);  //{5,4,3,1}
        st.emplace(5);//{5,5,4,3,1}

        cout<<st.top(); //prints 5 

        st.pop(); //st looks like {5,4,3,1}

        cout<< st.top(); //5

        cout<< st.size(); //4

        cout<<st.empty(); //false

        stack<int>st1 , st2;
        st1.swap(st2); 
        //Complexities of stack operation O(1),takes constant time.
        //Stack works on Last in First out principle.
        //Stacks cannot be indexed and it is considered invalid.


    }

    void explainQueue(){
        queue<int> q;
        q.push(1);  //{1}
        q.push(7);  //{1,7}
        q.emplace(4); //{1,7,4}

        q.back()  += 5

        cout<< q.back();  //prints 9

        cout<< q.front(); //prints 1

        q.pop(); //{7,4}

        cout<< q.front(); //prints 7
        //size , swap and empty are same as stack
        //Complexity of operations : O(1)
        //Follows First in First out principle.
    }

    void explainPQ(){
        priority_queue<int>pq;

        pq.push(5);  //{5}
        pq.push(2);  //{5,2}
        pq.push(8);  //{8,5,2}
        pq.emplace(10); //{10,8,5,2}

        cout<< pq.top(); //Prints 10

        pq.pop(); //{8,5,2}

        cout<< pq.top(); //prints 8
        //size swap empty function same as others

        //Minimum Heap
        priority_queue<int , vector<int>, greater<int>> pq; //to get a priority queue with minimum element on top.
        pq.push(5); //{5}
        pq.push(2); //{2,5}
        pq.push(8); //{2,5,8}
        pq.emplace(10); //{2,5,8,10}

        cout<< pq.top(); //prints 2
        //largerst value in priority queue stays on top. 
        //push , pop -  logn
        //top - O(1)
    }


    //Set stores elements uniqely and in sorted order.
    void explainSet(){
        set<int>st;
        st.insert(1);  //{1}
        st.emplace(2); //{1,2}
        st.insert(2);  //{1,2}
        st.insert(4);  //{1,2,4}
        st.insert(3);  //{1,2,3,4}

        //Functionality of insert in vector
        //can be used to increase efficiency

        //begin() , end(), rbegin(), rend() , size(),
        //empty() and swap() are same as those of above

        //{1,2,3,4,5}
        auto it = st.find(3); 

        //{1,2,3,4,5}
        auto it = st.find(6);

        //{1,4,5}
        st.erase(5);  //erase 5 //takes logarithmic time

        int cnt = st.count(1);

        auto it = st.find(3);
        st.erase(it); //it takes constant time

        //{1,2,3,4,5}
        auto it1 = st.find(2);
        auto it2 = st.find(4);
        st.erase(it1 , it2); //after erase {1,4,5} [first,last)

        //lower bond() and upper bound() function works in the same way.
        //as in vector it does.

        //Below is the syntax
        auto it = st.lower_bound(2);

        auto it = st.upper_bound(3);

    }
}

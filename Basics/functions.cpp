// functions.cpp
// Covers: functions in C++
// Date: 24 Dec 2025

//                                                 ========Functions=========
//  Functions are a set of code which performs a specific task when called.
//  Helps to increase readability and reusability.
//  void : Does not returns anything.
//  parameterised : parameters are passed during function call.
//  non parameterised : no parameters are passed.
//  return : returns a value of given datatype.


#include<iostream>
using namespace std;
void printname()            //void function and non parameterised function 
{
    cout<<"Heyyy Striver"<<endl;
}


void displayname(string n)  //parameterised void  function
{
     cout<<"Heloo"<<" "<<n<<endl;
}

int sum(int num1 , int num2)   //return function 
{
    int num3= num1 + num2;
    return num3;
}
int main(){
    string n;
    
    printname();

    cout<<"Your Name:";
    cin>>n;
    displayname(n);

    int num1 ,num2;
    cout<<"Enter 2 nos: ";
    cin>>num1>>num2;
    int res = sum(num1 , num2);
    cout<<"Sum : "<<res;

    return 0;
}

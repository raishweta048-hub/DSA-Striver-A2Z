//basics.cpp
//Covers: program structure , input/output , switch statement
//Date: 22 Dec 2025


//skeleton  and user input output of cpp
#include<iostream>
using namespace std;
int main()
{
  int age;
  int day;
    
    cout<<"Enter age:";
    cin>>age;
    cout<<age<<endl;

//Datatypes:- int , long int , long long int , double , float , char 
//Stores values as per required input space 

//Else-if Statements:-used to check multiple conditions sequentially and execute the block of code corresponding to the first condition that evaluates to true.
    if(age<18)
    {
        cout<<"You are not an adult"<<endl;
        if(age<8)
        {
            cout<<"You are a toddler";
        }
    }

    else if(age>=18)
    {
        cout<<"You are an adult"<<endl;
        if(age>50)
        {
            cout<<"You are a senior citizen";
        }
    }

//Switch statement :- The switch statement is a multi-branch selection construct that executes one block of code from multiple options based on the value of an expression. 
     cout<<"\nEnter day:";
     cin>>day;
    switch( day )
    {
        case 1:
        cout<<"Monday";
        break;

        case 2:
        cout<<"Tuesday";
        break;

        case 3:
        cout<<"Wednesday";
        break;

        case 4:
        cout<<"Thursday";
        break;

        case 5:
        cout<<"Friday";
        break;

        case 6:
        cout<<"Saturday";
        break;

        case 7:
        cout<<"Sunday";
        break;

        default:
        cout<<"Invalid input";        //the dafault statement does not needs a break statment to end.
    }
return 0;
}

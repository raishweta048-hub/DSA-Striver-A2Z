//When a function calls itself until a specific condition is met.
//When a recurssive func. is not given a condition it results in stack overflow.

#include<iostream>
using namespace std;

void function(int n);  // function declaration

int main(){
    function(3);  // function call
    return 0;
}

void function(int n){
    if(n == 0) return;   // ✅ BASE CASE (stopping condition)
    
    cout << n << endl;
    function(n - 1);     // recursive call
}

/*Recurssion tree :-
   Diagramatic representation of recurssive function in a simpler way.*/

//Basic Recurssion Problems
//1. Print Name 'n' times using recurssion:-
#include<iostream>
using namespace std;

void print(int i, int n){
    if(i > n) return;        // Base case

    cout << i << "XYZ";        // Work
    print(i + 1, n);         // Recursive call
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    print(1, n);             // Start from 1
    return 0;
}

//2. Print 1-> N:-
#include<iostream>
using namespace std;

void print(int i , int n){
    if(i>n)
        return;
    else
        cout<<i<<" ";
        print(i+1 , n);
}

int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;
    print(1 , n);
    return 0;
}

//3. Print N -> 1:-
#include<iostream>
using namespace std;

void print(int n , int i){
    if (i == 0) return;
    else
        cout<<i<<" ";
        print(i-1 , n);
}

int main(){
    int n;
    cout<<"Enter value :";
    cin>>n;
    print(n , n);
    return 0;
}

//4. Print linearly from 1 -> N (but by backtracking).
#include<iostream>
using namespace std;

void print(int i,int n){
    if(i<1){
        return;
    }
    else{
        print(i-1,n);
         cout<<i<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter the value:";
    cin>>n;
    print(n,n);
    return 0;
}

//5. Print from N ->1 by backtracking.
#include<iostream>
using namespace std;

void print(int i, int n){
    if(i<n){
        return;
    }
    else{
        print(i-1,n);
        cout<<i<<" ";
    }
}

int main(){
    int n;
    cout<<"ENter value :";
    cin>>n;
    print(n,n);
    return 0;
}

//6 . Parameterized Recursion [Sum of N numbers]
#include <iostream>
using namespace std;

void sum(int n, int s)
{
    if (n == 0)
    {
        cout << "Sum = " << s;
        return;
    }

    sum(n - 1, s + n);   // Backtracking through parameter
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    sum(n, 0);
    return 0;
}
 //6B.Functional Resursion [Sum of N numbers]
int NnumbersSum(int n)
{
	if (n == 0)
	{
		return 0;
	}

	return n+ NnumbersSum(n-1);
}

int main()
{
	int n;
	cin >> n;

	cout<<NnumbersSum(n);

	return 0;
}

//7A Parameterized Recursion [Factorial] 
void f(int i ,int fact){
    if (i<1){
        cout<<fact;
        return;
    }
        f(i-1 , fact*i);
    
}

int main(){
    int n;
    cin>>n;
    f(n , 1) ;
    return 0;
}

//7B Functional Recursion [factorial]

int f(int n){
    if(n == 0)
        return 1;

    return n * f(n-1);
}

int main(){
    int n;
    cin >> n;

    cout << f(n);

    return 0;
}

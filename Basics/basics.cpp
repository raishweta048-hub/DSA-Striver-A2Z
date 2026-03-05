// basics.cpp
// Covers: C++ skeleton, IO, conditionals, arrays, loops
// Date: 23 Dec 2025
/*  

C++ Language
    |
    |--- Standard Library
            |
            |--- namespace std
                    |
                    |--- cout
                    |--- cin
                    |--- string
                    |--- vector
                    |--- sort
                    |--- sqrt
                    |--- etc.

The C++ Standard Library is a collection of predefined functions, classes, and objects provided by C++. All standard library components are defined inside the namespace std to avoid name conflicts.

using namespace std; brings all the names from the standard namespace into the global scope, which may cause name conflicts.
using std::cout; brings only the specific name cout into the global scope, making it safer and more controlled

\n is a newline escape character that moves the cursor to the next line without flushing the output buffer.
std::endl inserts a newline and also flushes the output buffer, making it slower than \n.

bits/stdc++.h includes all standard library at once. Due to compile time overhead it isn't recommended for production.

Input/Output are handled using iostream header file.
*/
#include <iostream>
using namespace std;

int main()
{
    // ===== INPUT / OUTPUT =====
    int age;
    cout << "Enter age: ";
    cin >> age;
    cout << age << endl;

/*Conditional statements are used to make decisions in a program.
They allow the program to execute certain code only if a condition is true.
If statement is executed only if the condition is met
else statement is an optional companion which executes when if condition is not met.
When there are multiple conditions to test with these statements we use else-if in between to simplify the code rather that writing independent if statements again.*/
    // ===== IF-ELSE =====
    if(age < 18) {
        cout << "You are not an adult" << endl;
    } else {
        cout << "You are an adult" << endl;
    }

    // ===== ARRAYS =====
    /* Array is a linear data structure with homogeneous elements and contiguous memory locations in which we store data and perform any operation, with the help of index values.

Arrays are 0-indexed because the array name stores the base address of the first element. The element at index i is accessed using the formula:
BaseAddress + (index × size).
If indexing starts from 0, the first element is accessed directly at the base address, making pointer arithmetic simple and efficient.

Declaration:
Syntax : Data_type  array_name  [Array_size] ;

Accessing an array element:-
=> location is known: use index values
=> location is unknown: use Algorithms for optimized search (Linear or Binary Search.)
=> frequent lookups are required: store array into hash based data structures.
 */
    int a[3];
    cout << "Input array elements: ";
    cin >> a[0] >> a[1] >> a[2];
    cout << a[0] << " " << a[1] << " " << a[2] << endl;

    // ===== 2D ARRAY =====
    int arr[2][2];
    arr[1][1] = 56;
    cout << arr[1][1] << endl;

    // ===== FOR LOOP =====
    /*For loop: It is a control structure that allows users to execute specific block of code repeatedly.A for loop is used when you know how many times you want to repeat a task.
How it works

Initialization → Runs once at the start

Condition → Checked before every iteration

Body → Code runs if condition is true

Increment/Decrement → Updates the loop variable

Nested for loops:
For loops can be nest one inside another. It becomes useful with multi-dimensional data structures or problems with multiple iterations.

The inner loop runs completely every time and the outer loop runs once.
It can be used :-
	Patterns
	Multidimensional Array
	Comparision of elements
	Tables / Combinations
     */
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    for(int i = 1; i <= 10; i++) {
        cout << n << " * " << i << " = " << (n*i) << endl;
    }

    // ===== DO-WHILE LOOP =====
    int e = 2;
    do {
        cout << "Do-while runs at least once" << endl;
    } while(e <= 1);

    return 0;
}

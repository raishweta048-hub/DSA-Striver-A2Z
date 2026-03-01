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

    // ===== IF-ELSE =====
    if(age < 18) {
        cout << "You are not an adult" << endl;
    } else {
        cout << "You are an adult" << endl;
    }

    // ===== ARRAYS =====
    int a[3];
    cout << "Input array elements: ";
    cin >> a[0] >> a[1] >> a[2];
    cout << a[0] << " " << a[1] << " " << a[2] << endl;

    // ===== 2D ARRAY =====
    int arr[2][2];
    arr[1][1] = 56;
    cout << arr[1][1] << endl;

    // ===== FOR LOOP =====
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

// basics.cpp
// Covers: C++ skeleton, IO, conditionals, arrays, loops
// Date: 23 Dec 2025

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

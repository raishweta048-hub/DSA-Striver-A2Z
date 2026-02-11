# Basic Mathematics for DSA

## Topics Covered
- Count Digits
- Reverse a Number
- Palindrome Check
- GCD / HCF
- LCM
- Prime Numbers
- Factors

1. Count Digits
Extraction of Digits:-
Step 1: Take the given number and apply number modulo 10 to extract the last digit.
Step 2: Divide the given number by 10 and ignore the decimal part.
Continue with these steps by extracting digits and moving ahead by dividing
it with 10 until you no longer can divide further.
 Then you will be having the given number in reversed order.

 #include<iostream>
using namespace std;

int main(){
    int N, count;
    int lastdigit;
    cout<<"Enter value for N:";
    cin>>N;
    
    while(N>0)
 {
    lastdigit = N % 10;
    cout<<lastdigit;
    count = count + 1;
    N = N/10;
 }
 
 cout<<endl;
 cout<<"Count = " << count;
}

Another Method:-
int count(int n){
    int cnt = (int)(log10(n) + 1);
    return cnt;
}
Time Complexity : O(log10 (N))

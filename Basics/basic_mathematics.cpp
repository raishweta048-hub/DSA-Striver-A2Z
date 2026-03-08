//# Basic Mathematics for DSA

/*## Topics Covered
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
 Then you will be having the given number in reversed order. */

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
//Time Complexity : O(log10 (N))

/*2. Reverse of number : It uses extraction of digits with an additional 
concept that is if the trailing zeros are not allowed in the reversed output.
Formula: revNum = (revNum * 10) +  lastdigit */

#include<iostream>
using namespace std;
int main
{
    int n;
    cin>>n;
    int revNum=0;
    while(n>0) 
    {
        int id = n % 10;
        revNum = (revNum * 10) + ld;
    }
    cout<< revNum;
}

/*3.Check Palindrome : The numbers for which Reverse is exactly same as 
the original one.
 eg:- 121 */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value :"<<endl;
    cin>>n;
    int revNum= 0;
    int dup = n;
    while(n>0) {
        int ld = n % 10;
        revNum = (revNum * 10) + ld;
        n = n / 10; 
    }
    if(dup == revNum) cout<<dup<< " is a Palindrome";
    else cout << "is not a Palindrome";
    return 0;
}

/* 4.Armstrong number:-
Eg :- 371 = 3*3*3 + 7*7*7 + 1*1*1 */
 
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value :" <<endl;
    cin>>n;

    int original = n;
    int sum = 0;

    while(n > 0) {
        int ld = n % 10;
        sum = sum + (ld * ld * ld);
        n = n / 10;
    }

    if(sum == original)
        cout<<"Armstrong Number";
    else
        cout<<"Not Armstrong";

    return 0;
}

/* 5.Factors */
#include<iostream>
using namespace std;

int main()
{
    int N;
    cout<<"Enter the Value :";
    cin>>N;

    cout<<"Factors are:"<<endl;

    for(int i = 1; i<=N ; i++){
        if (N % i == 0){
            cout<<i<<endl;
        }
    }

    return 0;
}
/*     Other method:- */

#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){

    int N;
    cout<<"Enter number: ";
    cin>>N;

    vector<int> ls;

    for(int i = 1; i * i < = (N) ; i++){
        if (N % i == 0){
            ls.push_back(i);

            if((N/i) != i){
                ls.push_back(N/i);
            }
        }
    }

    sort(ls.begin() , ls.end());

    for(auto it : ls)
        cout<< it<<" ";

    return 0;
}

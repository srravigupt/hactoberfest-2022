// Program to find the ith fibonacci number given the first two fibonacci number of the sequence.
// fib (n) = fib (n-1) + fib (n-2)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cout<<"Enter the first fibonacci number-: ";
    cin>>a;
    cout<<"Enter the second fibonacci number-: ";
    cin>>b;
    int n ; 
    cout<<"Enter the ith fibonacci number you wanna get (value of i)-: ";
    cin>>n;
    if (n==1) cout<<a<<endl;
    else if (n==2) cout<<b<<endl;
    else {
        n-=2;
        while (n--) {
            int c = a+b;
            a = b;
            b = c;
        }
        cout<<b<<endl;
    }
}

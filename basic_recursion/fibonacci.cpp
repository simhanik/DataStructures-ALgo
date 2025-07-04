#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n==0 || n== 1) return n;
    int last = fibonacci(n-1);
    int slast = fibonacci(n-2);
    return last + slast;
}

int main(){
    int n;
    cout<<"Enter no terms of fibonacci series: ";
    cin>>n;
    int ans = fibonacci(n);
    cout << "The " << n << "th Fibonacci number is: " << ans;
    return 0;
}
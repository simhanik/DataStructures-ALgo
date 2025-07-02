#include<bits/stdc++.h>
using namespace std;
void nTimes(int i, int n){
    if(i>n) return;
    cout<<i<<endl;
    nTimes(i+1,n);
}

// by Backtracking
void fun(int i, int  n){
    if(i<1) return;
    fun(i-1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cout<<"Enter how many times you want to print: ";
    cin>>n;
    //nTimes(1,n);
    fun(n,n);
    return 0;
}
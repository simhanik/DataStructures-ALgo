#include<bits/stdc++.h>
using namespace std;
void nTimes(int i, int n){
    if(i<1) return;
    cout<<i<<endl;
    nTimes(i-1,n);
}

//  by Backtracking
void fun(int i, int  n){
    if(i>n) return;
    fun(i+1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cout<<"Enter how many times you want to print: ";
    cin>>n;
    //nTimes(n,n);
    fun(1,n);
    return 0;
}
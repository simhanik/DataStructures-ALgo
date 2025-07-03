#include<bits/stdc++.h>
using namespace std;

// parameterized way
void fact(int i, int sum){
    if(i<1) {
    cout<<(sum);
    return ;
    }
    fact(i-1,sum * i);
}

//functinal recursion
int fac(int n){
    if(n==0 || n==1) return 1;
    return n * fac(n-1);
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<fac(n);
    // fact(n,1);
    return 0;
}
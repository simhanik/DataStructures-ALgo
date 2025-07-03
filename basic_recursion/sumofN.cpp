#include<bits/stdc++.h>
using namespace std;

// parameterized way
void sumOf(int i, int sum){
    if(i<1) {
    cout<<(sum);
    return ;
    }
    sumOf(i-1,sum + i);
}

// functinal recursion
// int sum(int n){
//     if(n==0) return 0;
//     return n + sum(n-1);
// }
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    //cout<<sum(n);
    sumOf(n,0);
    return 0;
}
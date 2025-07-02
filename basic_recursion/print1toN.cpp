#include<bits/stdc++.h>
using namespace std;
void nTimes(int i, int n){
    if(i>n) return;
    cout<<i<<endl;
    nTimes(i+1,n);
}
int main(){
    int n;
    cout<<"Enter how many times you want to print: ";
    cin>>n;
    nTimes(1,n);
    return 0;
}
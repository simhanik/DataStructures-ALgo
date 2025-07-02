#include<bits/stdc++.h>
using namespace std;

// int nameNtimes(int n){
//     int count = 0;
//     if(count==n) return;
//     count ++;
//     nameNtimes(n);
// }

void nameNtimes(int i, int n){
    if(i>n) return;
    cout<<"Hello"<<endl;
    nameNtimes(i+1,n);
}
int main(){
    int n;
    cout<<"Enter how many times you want to print: ";
    cin>>n;
    nameNtimes(1,n);
    return 0;
}
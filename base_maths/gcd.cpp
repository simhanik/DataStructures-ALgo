#include<bits/stdc++.h>
using namespace std;

int gcdfun(int a, int b){
    while(a>0 && b>0){
        if(a>b) a = a % b;
        else b = b % a;
    }
    if(a==0) return b;
    else return a;
}

int main(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    int r = gcdfun(a,b);
    cout<<r;
    return 0;

}
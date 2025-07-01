#include<bits/stdc++.h>
using namespace std;

int count(int n){
    long long rev_no = 0;
    while(n>0)
    {
        int last_digit = n%10;
        rev_no = (rev_no * 10) + last_digit;
        n /=10;
    }
    return rev_no;
}


int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    long long res = count(n);
    cout<<"Reverse of the given nuumber: "<<res;

    return 0;
}
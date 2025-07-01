#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int cnt = 0;
    while(n>0)
    {
        //int last_digit = n%10;
        cnt +=1;
        n /=10;
    }
    return cnt;
}

int count_log(int n){
    int cnt = (int)(log10(n) + 1);
    return cnt;
}
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    //int res = count(n);
    int res = count_log(n);
    cout<<"Total digits in the given nuumber: "<<res;

    return 0;
}
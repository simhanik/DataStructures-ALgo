#include<bits/stdc++.h>
using namespace std;

// 1 for true and 0 for false
bool isPalindrome(int x) {
    int num = x;
    long long revNum = 0;
    while(x>0){
        int ld = x % 10;
        revNum = revNum * 10 + ld;
        x = x / 10;
    }
    if(revNum==num) return true;
    else return false;
    
}
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    bool res = isPalindrome(n);
    cout<<res;

    return 0;
}

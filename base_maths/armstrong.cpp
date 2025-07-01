#include<bits/stdc++.h>
using namespace std;

// 1 for true and 0 for false
bool isArmstrong(int x) {
    int num = x, sum = 0;
    int digit = (int)(log10(x) + 1 );
    while(x>0){
        int ld = x % 10;
        sum = sum + pow(ld,digit);
        x = x / 10;
    }
    if(sum == num) return true;
    else return false;
  
    
}
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    bool res = isArmstrong(n);
    cout<<(bool)res;

    return 0;
}
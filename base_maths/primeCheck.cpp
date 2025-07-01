#include<bits/stdc++.h>
using namespace std;

void primeCheck(int n) {
    vector<int>v;
    // 6 * 6 <= 36
    // 7 * 7 <= 36  -> false
    // O(sqrt(n))
    int count = 0;
    for(int i=1; i*i<=n ; i++){
        if(n%i==0){
            count ++;
            if(n/i != i){
                count ++;
            }
        }
    }
    if(count == 2) cout<<"prime";
    else cout<<"not prime";
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    primeCheck(n);
    return 0;
}
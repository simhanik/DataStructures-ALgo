#include<bits/stdc++.h>
using namespace std;

void printDivisor(int n) {
    vector<int>v;
    // 6 * 6 <= 36
    // 7 * 7 <= 36  -> false
    // O(sqrt(n))
    for(int i=1; i*i<=n ; i++){
        if(n%i==0){
            v.push_back(i);
            if(n/i != i){
                v.push_back(n/i);
            }
        }
    }
    // O(nlogn) where n is the no of factors
    sort(v.begin(),v.end());
    // O(n)
    for(auto it : v) {
        cout<< it <<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    printDivisor(n);
    return 0;
}
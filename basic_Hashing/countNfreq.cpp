#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter "<<n<<" array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //precompute  (here assume the maximum siz to be 12)
    int hash[13] = {0};
    for(int i=0; i<n; i++){
        hash[arr[i]] += 1;
    } 

    int q;
    cout<<"Enter how many numbers frequency appearances you want to check : ";
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        // fetch
        cout<<hash[number]<<endl;
    }
    
}
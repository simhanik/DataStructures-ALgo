#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the size ogf array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter "<<n<<" element in array: ";
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    // precompute
    map<int,int>mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    int q;
    cout<<"\nEnter how many nyumbers frequency appearances you want to check: ";
    cin>>q;
    cout<<"\nEnter those numbers you want to check frequency: ";
    while(q--){
        int num;
        cin>>num;
        //fetch
        cout<<mpp[num]<<endl;
    }
    return 0;
}   
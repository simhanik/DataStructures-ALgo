#include<bits/stdc++.h>
using namespace std;

void revArr(int a[],int l,int r){
    if(l>=r) return ;
    swap(a[l],a[r]);
    revArr(a,l+1,r-1);
    
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter "<<n<<" array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    revArr(arr,0,n-1);
    cout<<"\nArray in the reverse order :";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = n-1 ; i>=1; i--){
        int didSwap = 0;
        for(int j=0; j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didSwap = 1;
            }
        }
        if(didSwap == 0){
            break;
        }
        cout<<"\nRuns";
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter "<<n<<" elements in the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    cout<<"\nGiven array in sorted order : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
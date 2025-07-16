#include<bits/stdc++.h>
using namespace std;


int largest(vector<int> &arr) {
    // code here
    int largest = arr[0];
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}
int main(){
    int n;
    cout<<"Enter the size of the Array : ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter "<<n<<" elements in the array : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int res = largest(arr);
    cout<<"Lrgest element in the array : "<< res;
    return 0;
}
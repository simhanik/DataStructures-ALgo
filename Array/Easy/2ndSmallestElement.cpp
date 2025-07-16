#include<bits/stdc++.h>
using namespace std;

int getSecondSmallest(vector<int> &arr) {
        // code here
        int smallest = arr[0];
        int ssmallest = INT16_MAX;
        for(int i = 0 ; i < arr.size(); i++){
            if(arr[i] < smallest) {
                ssmallest = smallest;
                smallest = arr[i];
            }
            else if(arr[i] > smallest && arr[i] < ssmallest){
                ssmallest = arr[i];
            }
        }
        return ssmallest;
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
    int res = getSecondSmallest(arr);
    cout<<"Second smallest element in the array : "<< res; 
    return 0;
}

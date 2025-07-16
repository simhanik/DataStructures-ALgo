#include<bits/stdc++.h>
using namespace std;

int getSecondSmallest(vector<int> &arr) {
        // code here
        int smallest = arr[0];
        int ssmallest = INT_MAX;
        for(int i = 1 ; i < arr.size(); i++){
            if(arr[i] < smallest) {
                ssmallest = smallest;
                smallest = arr[i];
            }
            else if(arr[i] > smallest && arr[i] < ssmallest){
                ssmallest = arr[i];
            }
        }
        // If no valid second smallest
        if (ssmallest == INT_MAX){
            return -1;}
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
    if (res == -1)
        cout << "No second smallest element exists.\n";
    else
        cout << "Second smallest element in the array: " << res << endl; 
    return 0;
}

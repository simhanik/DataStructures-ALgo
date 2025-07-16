#include<bits/stdc++.h>
using namespace std;

int getSecondLargest(vector<int> &arr) {
        // code here
        int largest = arr[0];
        int slargest = -1;
        for(int i = 0 ; i < arr.size(); i++){
            if(arr[i] > largest) {
                slargest = largest;
                largest = arr[i];
            }
            else if(arr[i] < largest && arr[i] > slargest){
                slargest = arr[i];
            }
        }
        return slargest;
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
    int res = getSecondLargest(arr);
    cout<<"Second largest element in the array : "<< res;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

// Function that takes last element as pivot, places the pivot element at
// its correct position in sorted array, and places all smaller elements
// to left of pivot and all greater elements to right of pivot.
int partition(vector<int>& arr, int low, int high) {
    
    // code here
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j){
        while(arr[i] <= pivot && i <= high-1){
            i++;
        }
        while(arr[j] > pivot && j >= low+1){
            j--;
        }
        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp1= arr[low];
    arr[low] = arr[j];
    arr[j] = temp1;
    return j;
    
}

// Function to sort an array using quick sort algorithm.
void quickSort(vector<int>& arr, int low, int high) {
    // code here
    if(low<high){
        int partitionIndex = partition(arr,low,high);
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr,partitionIndex + 1, high);
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    quickSort(nums, 0, n - 1);

    cout << "Sorted array: ";
    for (int num : nums) {
        cout << num << " ";
    }
   
    return 0;
}
/** Rotate Array
Given an array arr[]. Rotate the array to the left (counter-clockwise direction) by d steps, where d is a positive integer. Do the mentioned change in the array in place.

Note: Consider the array as circular.

Examples :

Input: arr[] = [1, 2, 3, 4, 5], d = 2
Output: [3, 4, 5, 1, 2]
Explanation: when rotated by 2 elements, it becomes 3 4 5 1 2.

Input: arr[] = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20], d = 3
Output: [8, 10, 12, 14, 16, 18, 20, 2, 4, 6]
Explanation: when rotated by 3 elements, it becomes 8 10 12 14 16 18 20 2 4 6.

Input: arr[] = [7, 3, 9, 1], d = 9
Output: [3, 9, 1, 7]
Explanation: when we rotate 9 times, we'll get 3 9 1 7 as resultant array.

 */


#include<bits/stdc++.h>
using namespace std;
// class Solution {
//   public:

    
// };

// Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        d = d % arr.size();
        // pushing d elements to the temp array
        int temp[d];
        for(int i = 0; i<d; i++){
            temp[i] = arr[i];
        }
         // shifting by d places
        
        for(int i = d; i<arr.size(); i++){
            arr[i-d] = arr[i];
        }
        
        // again pushing back te left element from temp to arr
        for(int i = arr.size() - d; i<arr.size(); i++){
            arr[i] = temp[i-(arr.size() - d)];
        }
        // displaying the left rotated aray
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
    }

    int main(){
        int n;
        cout<<"Enter the size of the array : ";
        cin>>n;
        vector<int>arr(n);
        cout<<"\nEnter "<<n<<" array elements  : ";
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int d;
        cout<<"\nEnter by how many places you want to left rotate an array : ";
        cin>>d;
        rotateArr(arr,d);
        return 0;
    }
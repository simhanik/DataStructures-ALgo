#include<bits/stdc++.h>
using namespace std;

vector<int>sortedArray(vector<int>a, vector<int>b){
    int n1 = a.size();
    int n2 = b.size();
    int i=0;
    int j=0;
    vector<int> unionArr;
    while(i<n1 && j<n2){
        if(a[i] <= b[j]){
            if(unionArr.size() == 0 || unionArr.back() != a[i]){
                unionArr.push_back(a[i]);
            }
        i++;

        } // end of if
        else{
            if(unionArr.size() == 0 || unionArr.back() != b[j]){
                unionArr.push_back(b[j]);
            }
        j++;

        } // end of else
    } // end of while

    while(i<n1){
        if(unionArr.size() == 0 || unionArr.back() != a[i])
        {
                unionArr.push_back(a[i]);
        }
        j++;
    }

    while(j<n1){
        if(unionArr.size() == 0 || unionArr.back() != b[j])
        {
                unionArr.push_back(b[j]);
        }
        j++;
    }

    return unionArr;
    

}

int main(){
    vector<int>a = {1,2,3,4};
    vector<int>b = {2,4,5,6};
    vector<int> v = sortedArray(a,b); 
    for(auto it: v){
        cout<<it<<" ";
    }
    return 0;
} 
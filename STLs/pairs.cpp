#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,int>p={1,3};
    cout<<p.first<<" "<<p.second<<endl;

    // nested pair
    pair<int, pair<int,int>> p1;
    p1 = {1,{3,4}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
     //pair of array data types

    pair<int,int>arr[] ={{1,2},{3,4},{5,6}};
    cout<<arr[1].second;
    return 0;
}
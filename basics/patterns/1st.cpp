#include<bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int i = 0; i<n ; i++){
        for (int j=0;j<n;j++){
            cout<<" * ";
        }
        cout<<"\n";
    }
}
void print2(int n){
    for(int i = 0; i<n ; i++){
        for (int j=0;j<=i;j++){
            cout<<" * ";
        }
        cout<<"\n";
    }
}
void print3(int n){
    for(int i = 1; i<=n ; i++){
        for (int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}

void print4(int n){
    for(int i = 1; i<=n ; i++){
        for (int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int t;
    cout<<"enter t: ";
    cin>>t;
    for(int i=0; i<t;i++){
        int n;
        cout<<"enter n: ";
        cin>>n;
        print4(n);
    }
    return 0;
}
/*

print1(n)
enter t: 2
enter n: 3
 *  *  * 
 *  *  *
 *  *  *
enter n: 5
 *  *  *  *  * 
 *  *  *  *  *
 *  *  *  *  *
 *  *  *  *  *
 *  *  *  *  *
 
print2(n)
enter t: 2
enter n: 3
 * 
 *  *
 *  *  *
enter n: 5
 * 
 *  *
 *  *  *
 *  *  *  *
 *  *  *  *  *
 
 print3(n)
 enter t: 2
enter n: 3
1 
1 2
1 2 3
enter n: 5
1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5

print4()
enter t: 2
enter n: 3
1 
2 2
3 3 3
enter n: 5
1 
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
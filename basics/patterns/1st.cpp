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

void print5(int n){
    for(int i = n; i>=0 ; i--){
        for (int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}

void print6(int n){
    for(int i = n; i>=0 ; i--){
        for (int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}

void print7(int n){
    for(int i=0; i<n; i++){
        // space
        for(int j = 0; j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int k = 1; k<=2*i+1; k++){
            cout<<"*";
        }

        // space
        for(int j =0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}

void print8(int n){
    for(int i=n; i>0; i--){
        // space
        for(int j = 0; j<n-i;j++){
            cout<<" ";
        }
        //star
        for(int k = 1; k<=2*i-1; k++){
            cout<<"*";
        }

        // space
        for(int j =0;j<n-i;j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}

void print10(int n){
    for(int i=1; i<=2*n-1; i++){
        int stars = i;
        if(i>n){
            stars = 2*n-i;
        }
        for(int j = 1; j<=stars;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

void print11(int n){
    for(int i = 0; i<n ; i++){
        int start=1;
        if(start%2==0){
            start = 1;
        }
        else{
            start = 0;
        }
        for (int j=0;j<=i;j++){
            cout<<start;
            start = 1- start;
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
        // print7(n);
        // print8(n);
        print11(n);
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

print5(n)
enter t: 2
enter n: 3
* * * 
* *
*

enter n: 5
* * * * *
* * * *
* * *
* *
*

print6(n)
enter n: 5
1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1

print7(n)
enter n: 5
    *    
   ***
  *****
 *******
*********

print8(n)
enter n: 5
*********
 *******
  *****
   ***
    *
    
print9(n)
n=5

    *    
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
    
print10(n)
enter n: 5
*
**
***
****
*****
****
***
**
*
*/

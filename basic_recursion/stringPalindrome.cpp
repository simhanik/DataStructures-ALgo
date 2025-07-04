#include<bits/stdc++.h>
using namespace std;

bool palindrome(string &s,int i){
    if(i>=s.size()/2) return true;
    if(s[i] != s[s.size()-1-i]) return false;
    palindrome(s,i+1);
}

int main(){
    string s;
    cout<<"Enter string to check palindrome : ";
    cin>>s;
    if(palindrome(s,0)==1) cout<<"String is palindrome";
    else cout<<"string is not palindrome";
    return 0;
}
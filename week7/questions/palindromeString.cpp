#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//string are mutable

int main()
{
    string s;
    cin>>s;
    
    
    int n = s.length();

    int i =0;
    int j = s[n-1];
    bool isPalindrome = true;

   
    for(int i =0;i<=n/2;i++){
        if(s[i] != s[n-i-1]){
            isPalindrome = false;
            break;
        }
    }

    cout<<isPalindrome;

    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//string are mutable

int main()
{
    string s = "12345";
    
    
    int n = s.length();
    int ans = 0;
    int product = 1;
   
    for(int i = n-1;i>=0 ;i--){
        ans = ans + (s[i] - '0') * product;
        product = product * 10;
    }


    cout<<ans;

    return 0;
}
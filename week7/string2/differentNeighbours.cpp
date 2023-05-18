#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//string are mutable

int main()
{
    string s;
    cin>>s;
    
    int count = 0;
    int n = s.length();

   
    for(int i = 0; i<n;i++){
         //for single character
        if(n==1) break;
        //for first index
        else if(n==2 && s[0] != s[1]){
            count = 1;
            break;
        }
        else if(i==0){
            if(s[i] != s[i+1]) count++;
        }
        //for last index
        else if(i==(n-1)){
            if(s[i] != s[i-1]) count++;
        }
        else if(s[i] != s[i+1] &&  s[i] != s[i-1]){
            count++;
        }

    }
    cout<<count;
    
    return 0;
}
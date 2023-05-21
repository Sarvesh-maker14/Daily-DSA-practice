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
        if(i%2 != 0 ){
            s[i] = '#';
        }
        else continue;

    }

     for(int i = 0;i<n;i++){
        cout<<s[i];
    }
    
    
    return 0;
}
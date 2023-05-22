#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//string are mutable

int main()
{
    string s;
    cin>>s;

    string k = s;
    
    // int n = s.length();
    reverse(s.begin(),s.end());

    cout<<k+s;

    // int begin = n/2;
    // int end = n-1;

    // for(int i = begin;i<=(begin + end)/2 ;i++){
    //     swap(s[i],s[begin+end - i]);
    // }


    // cout<<s;

    return 0;
}
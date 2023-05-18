#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//string are mutable

int main()
{
    string s;
    cin>>s;
    
    sort(s.begin(),s.end());//sorting in ascii value
    cout<<s;
    
    return 0;
}
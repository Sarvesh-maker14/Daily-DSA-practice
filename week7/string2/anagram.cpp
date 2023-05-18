#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//abc --> cab
//leetcode 242

int main()
{
    string s;
    cout<<"Enter First String :";
    cin>>s;

    string b;
    cout<<"Enter Second String :";
    cin>>b;
    
    sort(s.begin(),s.end());
    sort(b.begin(),b.end());

    if(s  == b) cout<<true;
    else cout<<false;
    
    return 0;
}
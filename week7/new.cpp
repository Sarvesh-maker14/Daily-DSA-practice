#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//string are mutable

int main()
{
    string str = "awesome";
    
    // str.push_back('e');

    //reverse
    // cout<<str<<endl;
    // reverse(str.begin(),str.end());
    // cout<<str;

    //reverse first half

    int length = str.size();



    cout<<str.substr(length/2)<<endl;
    reverse(str.begin() + 0,str.begin()+ length/2);
    cout<<str;
    
    return 0;
}
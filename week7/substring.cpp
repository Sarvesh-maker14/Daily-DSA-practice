#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//string are mutable

int main()
{
    string str = "awesome";
    

    int length = str.size();

    //substr str.substr(index)  index --> last element

    cout<<str<<endl;
    // reverse(str.begin() + 0,str.begin()+ length/2);
   
    cout<<str.substr(2);;
    
    return 0;
}
//integer -2^31 to 2^31 - 1
//long long -2^63 to 2^63 -1 
// stoi --> string to integer 
// stoll --> string to long long int 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    string str = "12345";
    int x = stoi(str);
    cout<<x+1;
}
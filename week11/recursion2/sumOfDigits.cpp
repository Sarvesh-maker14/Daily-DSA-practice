#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sumA(int n){
    
    if(n>=0 and n<=9) return n;

    int digit = n%10;
    return digit + sumA(n/10);
}



int main()
{
    int n;
   
    cin>>n;
    cout<<sumA(n);
}
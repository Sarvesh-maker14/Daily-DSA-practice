
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool power2(int n){
    if(n == 1) return true;
    if(n%2 != 0) return false;
    else{
    // return power2(n/2);
    power2(n/2);
    }
}




int main()
{
    
    int n =16;

    cout<<power2(n);
}
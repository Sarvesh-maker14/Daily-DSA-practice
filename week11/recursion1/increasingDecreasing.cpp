#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void fun(int i ,int n){
    if(i>n) return;


    cout<<i<<endl;
    
    fun(i+1,n);

    if(i>1)cout<<i-1<<endl;
}




int main()
{
    fun(1,6);
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int min(int a,int b){
    if(a<b) return a;
    else return b;
}

int min(int a,int b,int c){ //method overloading
    if(a<=b && a<=c) return a;
    else if(b<=a && b<=c) return b;
    else return c;
}


int main()
{
    cout<<min(5,8);
   }


   
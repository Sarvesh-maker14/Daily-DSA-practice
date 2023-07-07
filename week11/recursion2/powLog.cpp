#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int pow(int x ,int n){
    if(n==0 ) return 1;
    if(n==1) return x;
    // return x*pow(x,n-1);
    // return pow(x,n/2)*pow(x,n/2);

    int ans = pow(x,n/2);
    if(n%2==0)  return ans*ans;
    else return ans*ans*x;
   

}




int main()
{
    cout<<pow(2,9);
}
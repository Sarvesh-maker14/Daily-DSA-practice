#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    static int ans = 0;

    if(n<=0) return ans;
    int digit = n%10;
    ans = ans*10 + digit;

    return reverse(n/10);




}




int main()
{
    cout<<reverse(4321);
}
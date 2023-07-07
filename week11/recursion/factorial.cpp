#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void gun(){
//     cout<<"hello sarvesh gun"<<endl;
// }

// void fact(int n){
//     int f = 1;
//     for(int i=1;i<=n;i++){
//         f *= i;
//         cout<<f<<endl;
//     }
    
// }

int fact(int n){
    //base case
    if(n==1 || n==0) return 1;
    //recursive call
   int ans = n*fact(n-1);
   return ans;
    
}

int main()
{
    cout<<fact(3);
}
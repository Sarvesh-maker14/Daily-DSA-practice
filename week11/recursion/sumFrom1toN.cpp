#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void gun(){
//     cout<<"hello sarvesh gun"<<endl;
// }

// void sumA(int sum1,int n){
//     if(n==0){
//        cout<<sum1<<endl;
//       return;
     
      
//     } 
    
    
//     sumA(sum1+n,n-1);
    
// }

int sumB(int n){
    if(n==0) return 0;
    return n+sumB(n-1);
   
}




// int main()
// {
//     sumA(0,6);
// }

int main()
{
    cout<<sumB(6);
}
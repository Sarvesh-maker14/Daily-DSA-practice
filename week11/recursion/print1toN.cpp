#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void gun(){
//     cout<<"hello sarvesh gun"<<endl;
// }

void fun(int n){
    if(n==0) return;
    cout<<n<<endl;
    
    fun(n-1);
}




int main()
{
    fun(3);
}
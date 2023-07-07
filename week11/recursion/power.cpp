#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void gun(){
//     cout<<"hello sarvesh gun"<<endl;
// }

int power(int a , int b){
    if( b==0) return 1;
    return a*power(a,b-1);
    
}




int main()
{
    cout<<power(3,2);
}
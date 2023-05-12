#include<iostream>
using namespace std;

int main()
{
    cout<<"enter a number : ";
   int n;
   cin>>n;
   if(n>=100 && n<=999){
    cout<<"Three Digit Number";
   }
   else{
     cout<<"Not a Three Digit Number";
   }
    return 0;
}
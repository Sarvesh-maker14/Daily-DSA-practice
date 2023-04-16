#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int count = 0;
    int a = n;
    while(n>0){
        n = n/10;
        count++;
    }
    if(a==0) cout<<"number of digits are  : 1";
    else
    cout<<"number of digits are  : "<<count;
    
    return 0;
}
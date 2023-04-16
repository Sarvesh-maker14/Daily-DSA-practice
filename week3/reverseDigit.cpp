#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int sum = 0;
    int a = 0;
    while(n>0){
        a = n%10;
        sum = sum*10 + a;    // *10 kardo bas
        n = n/10;
    }
    
    
    cout<<"Reverse digits are  : "<<sum;
    
    return 0;
}
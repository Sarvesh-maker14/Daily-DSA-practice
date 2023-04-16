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
        sum = sum + a;
        n = n/10;
    }
    
    
    cout<<"sum of digits are  : "<<sum;
    
    return 0;
}
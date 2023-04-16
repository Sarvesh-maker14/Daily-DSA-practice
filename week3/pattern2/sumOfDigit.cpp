#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number  : ";
    cin>>n;
    int sum = 0;
    while(n){
        int digit = n%10;
        if(digit%2==0) sum+=digit;
        n = n/10;
    }
    cout<<"sum is : "<<sum<<endl;
    return 0;
}
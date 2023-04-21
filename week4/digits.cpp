#include<iostream>
using namespace std;

int digits(int n){
    int count = 0;
    while(n>0){
        // n%=10;
        count++;
        n/=10;
    }
    return count*count;
}

int main()
{
    int n;
    cin>>n;
    int count = digits(n);
    cout<<count;
    return 0;
}
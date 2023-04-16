#include<iostream>
using namespace std;

int main()
{
     int n;
    cout<<"Enter number  : ";
    cin>>n;
    int sum = n;
    int k =0;
    while(n){
         k= n*10;
        k = k + n%10;
        n = n/10;
    }
    cout<<"sum is : "<<sum + k<<endl;
    return 0;
}
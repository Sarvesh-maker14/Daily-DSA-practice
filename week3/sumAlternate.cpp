// sum 1-2+3-4+5-6+7........

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int sum = 0;

    // Brute force ------------
    // for(int i = 1;i<=n;i++){
    //     if(i%2 != 0){
    //         sum = sum + i;
    //     }
    //     else{
    //         sum = sum - i;
    // }
    // }

    //  optimised ----------------
    // sum when n is even => -n/2
    // sum when n is odd => -n + n/2 (dont solve further as n can be float)
    if(n%2==0) sum = -n/2;
    else sum = -n/2 + n;
    cout<<"Sum is : "<<sum;

    
}
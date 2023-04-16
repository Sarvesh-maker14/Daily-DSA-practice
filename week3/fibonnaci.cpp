// 1 1 2 3 5 6 7..........
//fib(n) = fib(n-1) + fib(n-2)


#include<iostream>
using namespace std;

int main()
{
      int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    int a = 1,b=1,sum=0;

    for(int i = 1; i<=n-2;i++){ //hamesha 2 jada ayega islliye n-2
        sum = a + b;
        a = b;
        b = sum;
    }
    cout<<"Fibonnaci is  : "<<b;

    return 0;
}
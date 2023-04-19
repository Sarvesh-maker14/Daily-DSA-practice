#include<iostream>
using namespace std;

int main()
{
    int x =5;
    int *ptr = &x;
    int **ptr1 = &ptr;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr1<<endl;

}
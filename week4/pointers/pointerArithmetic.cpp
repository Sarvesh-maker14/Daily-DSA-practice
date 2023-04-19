#include<iostream>
using namespace std;


// 0 1 2 3 4 5 6 7 8 a b c d e f 
int main()
{
    int x = 5;
    // cout<<++x;
    int *ptr = &x;
    cout<<ptr<<endl; //0x61ff08
    ptr = ptr + 1;// number of bytes ki additon hota hai (08 + 4 bytes = 0c)
    cout<<ptr<<endl;// 0x61ff0c
    return 0;
}
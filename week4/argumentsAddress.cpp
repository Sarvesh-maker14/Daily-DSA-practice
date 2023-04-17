#include<iostream>
using namespace std;
int a = 9; //global variable

void fun(int x,int y ){//formal parameter  
    cout<<"fuction address"<<&x;
    cout<<endl;
}

int main()
{
    int x = 4;
    int y = 7;
    cout<<"main ka address"<<&x; //address
     cout<<endl;
    fun(x,y);//actual parameter 
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout << "Enter two integers";
    cin >> a >> b;

    if(a>b){
        cout << "First number" << a << "is a largest";
    }else{
         cout << "Second number" << b << "is a largest";
    }
    return 0;
}
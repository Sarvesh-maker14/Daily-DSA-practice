#include<iostream>
using namespace std;

float area(int r){
    return 3.14*r*r;
}

int main()
{
    int r;
    cin>>r;
    cout<<area(r)<<endl;
    return 0;
}
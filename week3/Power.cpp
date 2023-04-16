#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a number : ";
    cin>>a;
     int b;
    cout<<"To the power : ";
    cin>>b;
    float power = 1;

    bool flag = true;
    if(b<0){
        flag = false;
        b = -b;
    }


    for(int i = 1;i<=b;i++){
       power = power*a;
    }

    if(flag==false){
        power=1/power;
    }

    if(a==0 && b==0) cout<<"not defined";
    else cout<<power;





    return 0;
}
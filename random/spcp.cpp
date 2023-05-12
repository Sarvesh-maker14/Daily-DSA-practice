#include<iostream>
using namespace std;

int main()
{
    cout<<"enter cost price";
    int cp;
    cin>>cp;
    cout<<"enter selling price";
    int sp;
    cin>>sp;
  

    if(sp>cp){
        cout<<"profit = "<<sp-cp;
    }
    if(cp>sp){
        cout<<"loss = "<<cp-sp;
    }
    if(cp==sp){
        cout<<"No loss, No Profit";
    }
}
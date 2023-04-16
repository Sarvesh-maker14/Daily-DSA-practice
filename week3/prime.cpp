#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    bool flag = true;
    for(int i =1;i<n-1;i++){
        if(n%i==0){
            flag = false;
            break;
        }

    }
    if(n==1)cout<<"neither Prime nor composite number"<<endl;
    else if(flag = true){
    cout<<"Prime number"<<endl;
    }else cout<<"composite number"<<endl;
    return 0;
}
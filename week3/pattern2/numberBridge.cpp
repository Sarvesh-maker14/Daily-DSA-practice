#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
   
    for(int j = 1;j<=2*n-1;j++){
            cout<<j;
        }
    cout<<endl;


    int m = n - 1;
    int nsp = 1;

    for(int i =1;i<=m;i++){
        int a = 1;
        for(int j = 1;j<=m+1-i;j++){
            cout<<a;
            a++;
        }
        
        for(int k= 1;k<=nsp;k++){
            cout<<" ";
            a++;
        } 
        nsp+=2;

        for(int j = 1;j<=m+1-i;j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
    return 0;
}
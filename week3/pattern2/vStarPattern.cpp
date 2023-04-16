#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
   
    for(int i = 1; i<n-i;i++){

        for(int j =1;j<i;j++){
            cout<<" ";
        }
        cout<<"*";

        int m = 2*(n-i);

        for(int n=1;n<m;n++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }

    for(int i=1;i<n-1;i++){
        cout<<" ";
    }
    cout<<"*";
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
   
    

    for(int i =1;i<=n;i++){
        
        for(int j = 1;j<=n-i;j++){
            cout<<" ";
        }
        
        // for(int k= 1;k<=i;k++){
        //     cout<<k;
        // }
        // cout<<endl;

          for(int  m= 1;m<=2*i-1;m++){
            cout<<m;
        }
        cout<<endl;

    }
    return 0;
}
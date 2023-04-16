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
        
        for(int k= 1;k<i;k++){
            cout<<(char)(k+65 );
        }
        // cout<<endl;

          for(int  n= i;n>=1;n--){
            cout<<(char)(n+64);
        }
        cout<<endl;

    }
    return 0;
}
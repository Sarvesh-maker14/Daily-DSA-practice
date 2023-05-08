#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter number of rows : ";
    cin>>m;

    int n;
    cout<<"Enter number of rows : ";
    cin>>n;

    int arr[m][n];


    for(int i = 0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

   for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
           if(i==n/2 || j==n/2){
            cout<<arr[i][j]<<" ";
           }
           else{
            cout<<" ";
           }
          
          
        }
         cout<<endl;

     


    }


  
    


    return 0;
}
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

     for(int i = 0;i<n;i++){ // i --> row
        for(int j=0;j<m;j++){ //j--> column
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
   }

    
    //transpose the same matrix
    for(int i = 0;i<n;i++){
        for(int j=i+1;j<m;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

   //reversing the rows
   for(int j = 0;j<m;j++){ 
        for(int i=0;i<m/2;i++){ 
            int temp = arr[i][j];
            arr[i][j] = arr[n-i-1][j];
           arr[n-i-1][j] = temp;
        }
   
   }

 for(int i = 0;i<n;i++){ // i --> row
        for(int j=0;j<m;j++){ //j--> column
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
   }



    return 0;
}
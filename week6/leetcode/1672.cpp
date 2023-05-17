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
   

       
        int max = -1;
        for(int i = 0;i<m;i++){
            int sum = 0;
        for(int j=0;j<n;j++){
            sum = sum + arr[i][j];
        }
        if(max < sum ) max = sum;
    }
       
        cout<<max;
   }
 


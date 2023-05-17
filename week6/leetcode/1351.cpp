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
   

       
         int rows = m;
        int columns = n;
        int i = 0;
        int j =columns - 1;

        int count = 0;

        while(i<rows && j>=0){
            if(arr[i][j] == 1) count++;
            else if (arr[i][j] > 1) j--;
            else i++;
        }

       
        cout<<count;
   }
 


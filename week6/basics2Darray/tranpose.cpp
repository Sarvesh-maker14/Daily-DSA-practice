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

    int t[n][m];
    //transpose
    for(int j = 0;j<n;j++){
        for(int i=0;i<m;i++){
            t[j][i]=arr[i][j];
        }
    }

    for(int i = 0;i<n;i++){ // i --> row
        for(int j=0;j<m;j++){ //j--> column
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
   }



    return 0;
}
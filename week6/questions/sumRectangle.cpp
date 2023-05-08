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

    //taking inputs for the co-ordinates
    int l1,r1,l2,r2;

    cin>>l1>>r1>>l2>>r2;


    //taking sum 
    int sum =0;

    for(int i = min(l1,l2);i<= max(l1,l2);i++){
        for(int j = min(r1,r2);j<=max(r1,r2);j++){
            sum = sum + arr[i][j];
        }
    }


   cout<<sum<<" ";
    


    return 0;
}
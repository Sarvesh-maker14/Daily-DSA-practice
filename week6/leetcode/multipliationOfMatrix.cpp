#include<iostream>
using namespace std;

int main()
{

    //first matrix
    int m;
    cout<<"Enter number of rows for First Matrix: ";
    cin>>m;

    int n;
    cout<<"Enter number of rows for First Matrix: ";
    cin>>n;


    //second matrix
    int p;
    cout<<"Enter number of rows for Second Matrix: ";
    cin>>p;

    int q;
    cout<<"Enter number of rows for Second Matrix: ";
    cin>>q;


    if(n==p){

    int a[m][n]; // first matrix
    int b[p][q]; // second matrix


    cout<<"Enter elements for first Matrix: ";
    for(int i = 0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    cout<<"Enter elements for Second Matrix: ";
    for(int i = 0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }

    //creating a resultant matrix => m*n p*q  --> m*q
    




    }else{
        cout<<"Matrices cannot be multiplied :(";
    }


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

    for(int i = 0;i<n;i++){ // i --> row
        for(int j=0;j<m;j++){ //j--> column
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
   }



    return 0;
}
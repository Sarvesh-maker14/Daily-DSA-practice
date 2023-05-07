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

    //resultant matrix
    int res[m][q];
    for(int i = 0;i<m;i++){
        for(int j=0;j<q;j++){

            res[i][j] = 0;

            for(int k =0;k<p;k++){
                res[i][j] = res[i][j] + a[i][k]*b[k][j];
            }

        }
    }
    
    for(int i = 0;i<m;i++){ // i --> row
        for(int j=0;j<q;j++){ //j--> column
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
   }




    }else{
        cout<<"Matrices cannot be multiplied :(";
    }


   




    



    return 0;
}
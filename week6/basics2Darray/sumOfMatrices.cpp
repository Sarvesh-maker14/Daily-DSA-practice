#include<iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int result[3][3];


    for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            result[i][j] = arr[i][j] + arr1[i][j];
        }
    }

    for(int i = 0;i<3;i++){ // i --> row
        for(int j=0;j<3;j++){ //j--> column
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
   }
    
    


    return 0;
}
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
    cout<<endl;


    int minr = 0, minc = 0;
    int maxr = m-1,maxc = n-1;

    while(minr<=maxr && minc<=maxc){
        //right 
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j]<<" ";
        }
        minr++;

        if(minr>maxc || minc>maxc) break;

        //down
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;

        if(minr>maxc || minc>maxc) break;

         for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;


        if(minr>maxc || minc>maxc) break;
        for(int i=maxr;i>=maxr;i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;


    }




   }
 



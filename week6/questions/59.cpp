#include<iostream>
using namespace std;

int main()
{
    

    int n;
    cout<<"Enter number of rows : ";
    cin>>n;

    int arr[n][n];

    //minr = left
    //maxr = right
    //minc = top
    //maxc = down
    

    int minr = 0, minc = 0;
    int maxr = n-1,maxc = n-1;
    int index = 1;

    while(minr<=maxr && minc<=maxc){
        //right 
        for(int j=minc;j<=maxc;j++){
            arr[minr][j] = index;
            index++;
        }
        minr++;

        if(minr>maxc || minc>maxc) break;

        //down
        for(int i=minr;i<=maxr;i++){
            arr[i][maxc] = index;
            index++;
        }
        maxc--;

        if(minr>maxc || minc>maxc) break;

         for(int j=maxc;j>=minc;j--){
            arr[maxr][j] = index;
            index++;
        }
        maxr--;


        if(minr>maxc || minc>maxc) break;
        for(int i=maxr;i>=minr;i--){
            arr[i][minc] = index;
            index++;
        }
        minc++;


    }


    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }

        cout<<endl;
    }
    






   }
 



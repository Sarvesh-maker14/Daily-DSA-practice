#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[] = {2,-3,4,4,-7,-1,4,-2,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    

    int k = 4;
    int previousNegative = -1;

    int ans[n-k+1];


    for(int i =0;i<k;i++){
        if(arr[i]<0){
            previousNegative = i;
            break;
        }
    }

    if(previousNegative==-1) ans[0] = 1;
    else ans[0] = arr[previousNegative];

    

    int i =1;
    int j = k;

    while(j<n){
        if(previousNegative >=i) ans[i] = arr[previousNegative];
        else{
            previousNegative=-1;
            for(int x = i;x<=j;x++){
                if(arr[x]<0){
                    previousNegative = x;
                    break;
                }
            }
            if(previousNegative!=-1) ans[i] = arr[previousNegative];
            else ans[i] = 1;
        }

        i++;
        j++;
    }

    for(int i = 0;i<n-k+1;i++){
        cout<<ans[i]<<" ";
    }




   }


   
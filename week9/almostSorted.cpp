#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {4,2,7,9,8};
    int n = 5;

    int brr[5];

    for(int i =0;i<n;i++){
        brr[i] = arr[i];
    }

    for(int i =0;i<n-1;i++){
        for(int j =0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }



    bool flag = true;
    for(int i =0;i<n;i++){
        //validations
        if(i==0){
            if(brr[i] != arr[i] && brr[i] != arr[i+1]){
                flag = false;
                break;
            }
        }
        else if(i==n-1){
            if(brr[i] != arr[i] && brr[i] != arr[i-1]){
                flag =false;
                break;
            }
        }else{
            if(brr[i] != arr[i] && brr[i] != arr[i-1] && brr[i] != arr[i+1]){
                flag =false;
                break;
            }
        }
    }
    cout<<flag;
}
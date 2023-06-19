#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {4,2,7,9,8};
    int n = 5;

    int brr[5];

    bool flag = true;

    for(int i =0;i<n;i++){
        int count = 0;
        for(int j = 0;j<n;j++){
            if(i==j)continue;
            if(arr[j]>arr[i]) count++;

        }

        int actualIndex = n - count - 1;
       
    //    if(actualIndex == 0){
    //     if(arr[i] != arr[actualIndex] && arr[i] != arr[actualIndex + 1]){
    //         flag = false;
    //         break;
    //     }
    //    }
    //    else if(actualIndex == n-1){
    //     if(arr[i] != arr[actualIndex] && arr[i] != arr[actualIndex - 1]){
    //         flag = false;
    //         break;
    //     }
    //    }
    //    else {
    //     if(arr[i] != arr[actualIndex] && arr[i] != arr[actualIndex - 1]  && arr[i] != arr[actualIndex + 1]){
    //         flag = false;
    //         break;
    //     }
    //    }
    // }

    int diff = actualIndex - i;
    if(diff<0){
        diff = -diff;
    }
    if(diff>1){
        flag = false;
        break;
    }
    }


    cout<<flag;
    

}
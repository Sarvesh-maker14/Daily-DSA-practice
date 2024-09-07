#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printSum(int arr[],int n,int idx,int sum){
    if(idx == n){
        cout<<sum;
        return;
        };
sum = sum + arr[idx];
printSum(arr,n,idx+1,sum);
}

// int sumOfArray(int arr[],int n,int idx){
//     if(idx == n) return arr[idx];
//     return arr[idx] + sumOfArray(arr,n,idx+1);
// }


int main()
{
    int arr[] = {1,3,2,-6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
   
     printSum(arr,n,0,0);
    // cout<<sumOfArray(arr,n,0);
}
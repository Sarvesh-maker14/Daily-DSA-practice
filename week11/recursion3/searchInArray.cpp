#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printSum(int arr[],int n,int idx,int target){
   
   if(idx == n){
        cout<<-1;
        return;
        };
   
   
    if(arr[idx] == target){
        cout<<idx;
        return;
        };

printSum(arr,n,idx+1,target);
}




int main()
{
    int arr[] = {1,3,2,-6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 2;
   
     printSum(arr,n,0,target);
    // cout<<sumOfArray(arr,n,0);
}
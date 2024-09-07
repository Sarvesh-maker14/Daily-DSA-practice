#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printMin(int arr[],int n,int idx,int min){
    if(idx == n){
        cout<<min;
        return;
        };
if(min>arr[idx]) min = arr[idx];
printMin(arr,n,idx+1,min);
}

int main()
{
    int arr[] = {2,1,6,3,9,7,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
   
    printMin(arr,n,0,INT_MAX);
}
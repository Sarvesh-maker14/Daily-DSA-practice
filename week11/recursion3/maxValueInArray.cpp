#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int maxInArray(int arr[],int n,int idx){
    if(idx == n) return INT_MIN ;
    return max(arr[idx],maxInArray(arr,n,idx+1));
}



int main()
{
    int arr[] = {2,1,6,3,9,0,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxInArray(arr,n,0);
   

}
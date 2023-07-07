#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {4,5,6,7,0,1,2};
    int n = 7;
    
    int lo = 0;
    int hi = n-1;
    int piviot = -1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
         if(arr[mid]<arr[mid+1] && arr[mid]<arr[mid-1]){
            piviot = mid;
            
            break;
        }
        else if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1] ){
            piviot = mid +1;
            break;
        }
        else if(arr[mid]>arr[hi]) lo = mid+1;
        else hi = mid -1;
    }

    cout<<arr[piviot];
   
    

}
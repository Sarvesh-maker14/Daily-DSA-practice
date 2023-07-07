#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {0,0,0,0,0,1,1,1,1,1,1,1,1,1};
    int n = 14;
    int x = 1;

    //lower bound --> 18

    //brute force
    // for(int i =0 ;i<n;i++){
    //     if(arr[i]>x){
    //         cout<<arr[i-1];
    //         break;
    //     }
    // }


    int lo = 0;
    int hi = n-1;
    int firstIdx = -1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid]==0){
                firstIdx = mid;
                break;
            }
            if(arr[mid-1]!=x){
                firstIdx = mid;
                break;
            }
            else{
                hi = mid - 1;
            }
        }
        else if(arr[mid]<x) lo = mid+1;
        else hi = mid - 1;
    }
   

   if(firstIdx==-1) cout<<0;
   else cout<<n-firstIdx;
    




        
    

}
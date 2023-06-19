#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,2,2,3,3,3,3,3,3,4,4,5,5,9};
    int n = 14;
    int x = 3;

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
    bool flag = false;
    while(lo<hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid-1]!=x){
                flag = true;
                cout<<mid;
                break;
            }
            else{
                hi = mid -1;
            }
        }
        else if(arr[mid]<x) lo = mid+1;
        else hi = mid - 1;
    }
    if(flag==false) cout<<arr[hi];
    




        
    

}
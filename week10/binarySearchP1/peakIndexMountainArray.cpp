#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,3,5,4,3,2,1,0};
    int n = 8;
    
    

   

    // brute force
    // for(int i =1;i<n-2;i++){
    //     if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
    //         cout<<i;
    //         break;
    //     }
    // }


    int lo = 1;
    int hi = n-2;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
         if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            cout<<mid;
            flag = true;
        }
        else if(arr[mid]>arr[mid+1]) hi = mid - 1;
        else lo = mid+1;
    }
    if(flag==false) cout<<-1;
    




        
    

}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int lo = 0; 
    int hi = 1;
    int target = 7;

    while(arr[hi]<target){
        lo = hi;
        hi = hi * 2;
    }

    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==target){
            cout<<mid;
            break;
        }
        else if(arr[mid]<target) lo = mid+1;
        else hi = mid - 1;
    }
   
}
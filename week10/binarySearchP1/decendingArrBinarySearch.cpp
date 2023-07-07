 #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {9,8,7,5,4,3,2};
    int n = 7;
    int x = 8;
    

    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(arr[mid]==x){
            cout<<true;
            break;
        }
        else if(arr[mid] > x){
            lo = mid + 1;
        }else{
            hi = mid -1;
        }





    }






        
    

}
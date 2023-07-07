#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][6] = {{1,1,1,1,1,1},{0,0,1,1,1,1},{0,0,0,1,1,1},{0,1,1,1,1,1},{0,0,0,1,1,1}};
    int m = 5;
    int n = 6;
    int row = 0;
   

    for(int i = 0;i<m;i++){
            int x =1;
            int maxOnes = -1;
            int count = 0;
            int lo = 0;
            int hi = n-1;
            int firstIdx = -1;
            while(lo<=hi){
                int mid = lo + (hi-lo)/2;
                if(arr[i][mid]==x){
                    if(mid==0){
                        firstIdx = mid;
                        break;
                    }
                    else if(arr[i][mid-1]!=x){
                        firstIdx = mid;
                        break;
                    }
                    else{
                        hi = mid - 1;
                    }
                }
                else if(arr[i][mid]<x) lo = mid+1;
                else hi = mid - 1;
            }
        

        if(firstIdx!=-1) count = n-firstIdx;
         
        if(maxOnes<count){
            maxOnes = count;
            row = i;
        }
    }

    cout<<row;

}
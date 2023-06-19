#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {5,4,6,3,2,1};
    int n = 6;

    //taking copy of the array in vector
    // vector<int> v(6);

    // for(int i =0;i<n;i++){
    //     v[i] = arr[i];
    // }
    

    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    //selection sort 

    for(int i =0;i<n-1;i++){
        int min = INT_MAX;
        int minIdx = INT_MIN;
        // min element for each row
        for(int j = i;j<n;j++){
           if(arr[j]<min){
            min = arr[j];
            minIdx = j;
           }     
        }

        //swapping the first index of the row with the minIdx
        swap(arr[i],arr[minIdx]);
    }


    for(int ele : arr){
        cout<<ele<<" ";
    }


} 
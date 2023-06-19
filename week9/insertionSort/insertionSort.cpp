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

    //insertion sort 

    for(int i =1;i<n;i++){
        
        int j =i;
        // while(j>=1){
        //     if(arr[j]>=arr[j-1]) break;
        //     else{
        //         swap(arr[j],arr[j-1]);
        //         j--;
        //     }
        // }

        //method 2
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }


       
    }


    for(int ele : arr){
        cout<<ele<<" ";
    }


} 
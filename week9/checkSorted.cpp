#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    int n = 6;
    bool flag = true;
    for(int i =0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag = false;
            break;
        }
    }

    if(flag){
        cout<<"sorted";
    }else{
        cout<<"unsorted";
    }
}
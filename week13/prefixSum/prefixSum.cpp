#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[] = {1,7,3,6,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=1;i<n;i++){
        arr[i] = arr[i] + arr[i-1];
    }

    bool flag = false;

    int idx = -1;
    for(int i=1;i<n;i++){
        if(2*arr[i] == arr[n-1]){
            flag = true;
            idx = i;
            break;
        }
    }

    if(flag) cout<<"yes it can be partitioned "<<idx;
    else cout<<"cannot be partitioned";




}
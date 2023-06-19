#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {5,4,6,3,2,1};
    int n =6;
    // vector<int> v(6,0);
    int x = 0;

     for(int ele : arr){
        cout<<ele<<" ";
    }

    cout<<endl;

    for(int i=0;i<n;i++){
        int min = INT_MAX;
        int minIdx = INT_MIN;
        for(int j=0;j<n;j++){
            if(arr[j]<=0) continue;
            else{
                if(min>arr[j]){
                    min = arr[j];
                    minIdx = j;
                }
            }
        }
        arr[minIdx] = -x;
        
        x++;
    }

     for(int ele : arr){
        cout<<-ele<<" ";
    }
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;



void printSubsetA(vector<vector<int>>&ans,vector<int>&orignal,int idx,vector<int>&temp){

    if(idx==orignal.size()){
        ans.push_back(temp);
        return;
    }

    printSubsetA(ans,orignal,idx+1,temp);// not part of the subset
    temp.push_back(orignal[idx]);
    printSubsetA(ans,orignal,idx+1,temp);//part of the subset
    temp.pop_back();

    

}


int main()
{
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    // cout<<n;
    // display(arr,n,0);

    vector<int> v(n);
    for(int i =0;i<n;i++){
        v[i] = arr[i];
    };

    vector<int> t;

     vector<vector<int>>ans;

   printSubsetA(ans,v,0,t);

    for(int i = 0;i<ans.size();i++){ // i --> row
        for(int j=0;j<ans[i].size();j++){ //j--> column
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
   }
        
    
}
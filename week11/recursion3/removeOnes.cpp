#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> removeOnes(vector<int> &k,vector<int> &v,int idx){

   if (idx == v.size()) {
        return k;
    }

    int ch = v[idx];
    if (ch == 1)
        return removeOnes(k, v, idx + 1);
    else {
        k.push_back(ch);
        return removeOnes(k, v, idx + 1);
    }
}




int main()
{
    int arr[] = {2,1,6,3,9,0,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    // cout<<n;
    // display(arr,n,0);

    vector<int> v(n);
    for(int i =0;i<n;i++){
        v[i] = arr[i];
    }


    vector<int> k;
    k = removeOnes(k,v,0);

     for (int i = 0; i < k.size(); i++) {
        cout << k[i] << " ";
    }


}
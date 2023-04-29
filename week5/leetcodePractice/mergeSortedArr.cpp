#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;


// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]

void display(vector<int>& a){
   for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
   }
   cout<<endl;
}

vector<int> merge(vector<int>& v1,vector<int>& v2){
    int n = v1.size();
    int m = v2.size();
    vector<int> v(m+n);
    int i =0;
    int j =0;
    int k =0;
    while(i<=n-1 && j<=m-1){
        if(v1[i]<v2[j]){
            v[k] = v1[i];
            i++;
            k++;
        }
        else{
            v[k] = v2[j];
            j++;
            k++;
        }
    }

    if(i==n){
        while(j<=m-1){
             v[k] = v2[j];
            j++;
            k++;
        }
    }

    if(j==m){
         while(i<=n-1){
            v[k] = v1[i];
            i++;
            k++;
        }
    }

    return v;
}



int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(8);
    
    display(v1);
    
     vector<int> v2;
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(10);
    v2.push_back(12);
    
    display(v2);

    vector<int> v = merge(v1,v2);
    display(v);

    return 0;
}
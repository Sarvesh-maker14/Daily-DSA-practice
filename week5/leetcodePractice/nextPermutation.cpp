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

void reverseV(vector<int>& v,int i,int j){
    while(i<j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
}

void nextPermutation(vector<int>& v){

    //finding pivot element
    int idx = -1;
    int n = v.size();
    for(int i = n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            idx = i;
            break;
        }
    }

    //validation to check whether array is already has the last permutation
    if(idx == -1){
        reverseV(v,0,n-1);
        return;
    }

   
     //sort
    reverseV(v,idx+1,n-1);

     //just greatest number nikalna
    int j = -1;
    for(int i =idx+1;i<n;i++){
        if(v[i]>v[idx]){
            j = i;
            break;

        }
    }

    //swap
    int temp = v[idx];
    v[idx] = v[j];
    v[j] = temp;
}



int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(3);
    
    display(v1);

    nextPermutation(v1);
    display(v1);

    return 0;
}
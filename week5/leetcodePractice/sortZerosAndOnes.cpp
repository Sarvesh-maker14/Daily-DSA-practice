#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void display(vector<int>& a){
   for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
   }
   cout<<endl;
}

void sortZerosAndOnes(vector<int>& v1){
     int count0 = 0;
     int count1 = 0;
     int n = v1.size();
     for(int i = 0;i<n;i++){
        if(v1[i]==0) count0++;
        else count1++;
     }
     for(int i =0;i<n;i++){
        if(i<count0) v1[i]=0;
        else v1[i] = 1;

     }
}

void sortZeroOneTwoPointer(vector<int>& v1){
     int i = 0;
     int j = v1.size() - 1;
     while(i<j){
        if(v1[i]==0) i++;
        else if(v1[j]==1) j--;
        else if(v1[i]==1 && v1[j]==0){
            v1[i] = 0;
            v1[j] = 1;
            i++;
            j--;
        }
     }
}







int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(1);
    display(v1);
   
   //method1
    // sort(v1.begin(),v1.end());

    //method2 two pass method
    // sortZerosAndOnes(v1); // O(2n)

    //method3 two pointers

    sortZeroOneTwoPointer(v1);

   
    display(v1);

    return 0;
}
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



void sortTwoPass(vector<int>& v1){
   int num0 = 0;
   int num1 = 0;
   int num2 = 0;
   int n = v1.size();

   //first pass
   for(int i =0;i<n;i++){
    if(v1[i]==0) num0++;
    else if(v1[i]==1) num1++;
    else num2++;
   }

   //second pass
    for(int i =0;i<n;i++){
    if(i<num0) v1[i] = 0;
    else if(i<(num0+num1)) v1[i]=1;
    else v1[i]=2;
   }
 
}


//one pass algo 

//Dutch Flag Algo 
// low   mid    high

//   0 ---> low - 1 ->0
//   high + 1----> end ->2
//   low ---->mid -1 --> 1

void sortDutchAlgo(vector<int>& v1){
   
   int n = v1.size();
   int low = 0;
   int mid = 0;
   int high = n -1;

   while(mid<=high){
      if(v1[mid]==2){
        int temp = v1[mid];
        v1[mid] = v1[high];
        v1[high] = temp;
        high--;
      }
      else if(v1[mid]==0){
        int temp = v1[mid];
        v1[mid] = v1[low];
        v1[low] = temp;
        low++;
        mid++;
      }
      else mid++;
   }

  
 
}







int main()
{
    vector<int> v1;
    v1.push_back(0);
    v1.push_back(0);
    v1.push_back(2);
    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(2);
    v1.push_back(1);
    display(v1);
   
   
     // two pass algo
    // sortTwoPass(v1);
    sortDutchAlgo(v1);

   
    display(v1);

    return 0;
}
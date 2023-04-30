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


int trap(vector<int>& height){
     int n = height.size();
    

    //finding previous greatest element
    int prev[n];
    prev[0] = -1;
    int max = height[0];
    for(int i =1;i<n;i++){
        prev[i] = max;
        if(max<height[i]){
            prev[i] = max;
            if(max<height[i]) max = height[i];
        }
    }

    //finding next gratest element
    int next[n];
    next[n-1] = -1;
    max = height[n-1];
    for(int i =n-2;i>=0;i--){
        next[i] = max;
        if(max<height[i]){
            prev[i] = max;
            if(max<height[i]) max = height[i];
        }
    }

    //creating a minimum array
     int minA[n];
     for(int i = 0;i<n;i++){
        minA[i] = min(prev[i],next[i]);
     }

     //calculating water
     int water = 0;
     for(int i =1;i<n-1;i++){
        if(height[i]<minA[i]){
            water = water + (minA[i]-height[i]);
        }
     }

  

     return water;

}




int main()
{
    vector<int> v1;
    v1.push_back(4);
    v1.push_back(2);
    v1.push_back(0);
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(2);
    
    // display(v1);

    int water = trap(v1);
    cout<<water<<endl;
   

    return 0;
}
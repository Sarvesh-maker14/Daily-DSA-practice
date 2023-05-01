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

int productArr(vector<int>& v){
    int product = 1;
    for(int i =0;i<v.size();i++){
       product = product*v[i];

    }

    return product;
}




int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(8);
    
    display(v1);
    
    int productA = productArr(v1);
    cout<<productA;
    

    return 0;
}
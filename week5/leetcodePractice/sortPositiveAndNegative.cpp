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



void sortPositiveAndNegative(vector<int>& v1){
     int i = 0;
     int j = v1.size() - 1;
     while(i<j){
        if(v1[i]<0) i++;
        else if(v1[j]>1) j--;
        else if(v1[i]>0 && v1[j]<0){
            int temp = v1[i]; 
            v1[i] = v1[j];
            v1[j] = temp;
            i++;
            j--;
        }
     }
}







int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(-2);
    v1.push_back(3);
    v1.push_back(-4);
    v1.push_back(-5);
    v1.push_back(6);
    v1.push_back(8);
    display(v1);
   
   

    sortPositiveAndNegative(v1);

   
    display(v1);

    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {5,3,10,6};
    int n =4;
  

     for(int ele : arr){
        cout<<ele<<" ";
    }

    cout<<endl;

    float kmin = (float)INT_MIN;
    float kmax = (float)INT_MAX;
    bool flag = true;


    for(int i =0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){ 
            kmin = max(kmin,(float)((arr[i]+arr[i+1])/2.0));
        }
        else{
            kmax = min(kmax,(float)((arr[i]+arr[i+1])/2.0));
        }
        if(kmin>kmax){
            flag = false;
            break;
        }
    }

    if(flag == false) cout<<-1;

    else if(kmin==kmax){
        if(kmin - (int)kmin == 0){
            cout<< "there is only one value of k"<<kmin;
        }else{
            cout<<-1;
        }
    }
    else{
        if(kmin - (int)kmin >0){
            kmin = (int)kmin + 1;
        }
        cout<<"Range of k is :"<<kmin<<" to "<<(int)kmax;
    }
   
}
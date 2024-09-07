#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& a,vector<int>& b ,vector<int>& res){

    //3 pointers
    int i = 0;//a
    int j = 0;//b
    int k = 0;//res

    while(i<a.size() && j<b.size()){

    if(a[i]>=b[j]){ //descending
        res[k] = a[i];

        k++;
        i++;
    }
    else{
        res[k] = b[j];
        k++;
        j++;
    }
    }

    if(i==a.size()){
        while(j<b.size()){
            res[k] = b[j];
            k++;
            j++;
        }
    }

    if(j==b.size()){
        while(i<b.size()){
            res[k] = a[i];
            k++;
            i++;
        }
    }


}

void mergeSort(vector<int>& v){
    int n = v.size();

    if(n==1) return;

    //partion
    int n1 = n/2;
    int n2 = n - n/2;


    vector<int> a(n1);
    vector<int> b(n2);

    //copying value
    for(int i = 0;i<n1;i++){
        a[i] = v[i];
    }

    for(int i = 0;i<n2;i++){
        b[i] = v[i+n1];
    }

    mergeSort(a);
    mergeSort(b);

    merge(a,b,v);

    //delete vector 
    a.clear();
    b.clear();



}


int main()
{
    int arr[] = {5,1,3,0,4,9,6};
    int n1 = sizeof(arr)/sizeof(arr[0]);

    vector<int> a(arr,arr+n1);

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;



    mergeSort(a);


     for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }


}
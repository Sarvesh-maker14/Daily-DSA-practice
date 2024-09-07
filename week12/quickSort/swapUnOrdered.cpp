#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
{
    int a[] = {4,1,3,2,5};
    int n = sizeof(a)/sizeof(a[0]);

    int indx1 = -1;
    int indx2 = -1;

    for(int i = 0;i<n-1;i++){
        if(a[i] > a[i+1]){
            if(indx1 == -1){
                indx1 = i;
                indx2 = i+1;
            }
            else indx2 = i+1;
        }

    }

    swap(a[indx1],a[indx2]);


    for(auto x:a) cout<<x<<" ";

}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

   
    
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }

    int minA = 10000;
    for(int i = 0;i<n;i++){
        minA = min(arr[i],minA);
    }

    


    cout<<"Min is :"<<minA;

    return 0;
}
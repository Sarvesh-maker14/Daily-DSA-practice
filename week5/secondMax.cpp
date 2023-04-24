#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

   
    
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }

    int max = arr[0];
    for(int i = 1;i<=n-1;i++){
        if(max<arr[i]) max = arr[i];
    }

    int secondMax = arr[0];
    for(int i = 1;i<=n-1;i++){
        if(secondMax<arr[i] & arr[i] != max ) secondMax = arr[i];
    }


    cout<<"secondMax is :"<<secondMax;

    return 0;
}
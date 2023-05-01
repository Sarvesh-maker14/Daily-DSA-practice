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

    bool flag = false;

    
    for(int i = 0;i<n/2;i++){
        if(arr[i] != arr[n-i-1]){
            flag = false;
        }
        else{
            flag = true;
        }

    }

    cout<<flag;

    

    

    return 0;
}
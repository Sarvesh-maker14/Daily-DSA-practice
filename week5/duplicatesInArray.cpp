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

    
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i] == arr[j]) {
                flag = true;
                break;
            }
        }
    }

    if(flag==true){
        cout<<"Duplicate exists in the given array";
    }else{
       cout<<"Duplicate does not exists in the given array";
    }

    

    return 0;
}
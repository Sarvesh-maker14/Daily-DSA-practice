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

    for(int i =0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag = true;
            break;
        }
    }

    if(flag == true) cout<<"not sorted"<<endl;
    else cout<<"sorted"<<endl;
       

    return 0;
}
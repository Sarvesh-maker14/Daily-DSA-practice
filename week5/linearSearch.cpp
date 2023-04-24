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

     int x;
    cout<<"enter the element you want to search";
    cin>>x;

    //flag
    bool flag = false;

    int sum=0;
    for(int i = 0;i<=n-1;i++){
       if(arr[i]==x) flag = true;
    }
    if(flag = true) cout<<"element found";
    else cout<<"element not found"

    cout<<sum<<" ";


    return 0;
}
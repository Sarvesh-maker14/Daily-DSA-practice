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

    int first_max = -1;
    int second_max = -1;

    for(int i =0;i<n;i++){
        if(arr[i]>first_max){
            second_max = first_max;
            first_max = arr[i];
        }

        if(second_max<arr[i] && first_max != arr[i]){
            second_max = arr[i];
        }
    }


    cout<<"secondMax is :"<<second_max;

    return 0;
}
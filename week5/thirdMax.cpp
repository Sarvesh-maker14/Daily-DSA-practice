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
    int third_max = -1;

    for(int i =0;i<n;i++){
        if(arr[i]>first_max){
            third_max = second_max;
            second_max = first_max;
            first_max = arr[i];
        }

        else if(second_max<arr[i]){
            third_max = second_max;
            second_max = arr[i];
        }

        else if(third_max<arr[i]){
            third_max = arr[i];
        }
    }

    cout<<"third_max :"<<first_max;
    cout<<"third_max :"<<second_max;
    cout<<"third_max :"<<third_max;

    return 0;
}
#include<iostream>
using namespace std;

void display(int arr[]){
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]  = {1,2,3,4,5};
    display(arr);//arr ka address
    return 0;
}
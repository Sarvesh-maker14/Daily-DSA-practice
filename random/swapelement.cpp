#include<iostream>
using namespace std;


void printArray(int arr[] , int n ){
    for(int i = 0; i < n; i++){
       cout << arr[i] <<" ";

}cout<<endl;
}


void swapAlternate(int arr[], int size){

    for(int i = 0; i < size;i = i + 2){
        if(i + 1 < size){
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main(){

    int even[8] = {0,1,2,3,4,5,6,7};
    int odd[5] = {0,1,2,3,4};

    swapAlternate(even,8);
    printArray(even,8);


    return 0;
    
}
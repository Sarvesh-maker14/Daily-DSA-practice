#include<iostream>
using namespace std;

int firstOcc(int arr[], int n,int key){

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
    if(arr[mid] == key){
         ans = mid;
         e = mid - 1;

    }
    else if(key > arr[mid]){
        s = mid + 1;
    }
    else{
        e = mid -1;
    }

    int mid = s + (e-s)/2;



    }

    return -1;


}

int lastOcc(int arr[], int n,int key){

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
    if(arr[mid] == key){
         ans = mid;
         s = mid + 1;

    }
    else if(key > arr[mid]){
        s = mid + 1;
    }
    else{
        e = mid -1;
    }

    int mid = s + (e-s)/2;



    }

    return -1;


}


int main(){

    int even[5] = {0,1,3,3,4};

    cout << firstOcc(even,5,3)<<endl;

    return 0;

}
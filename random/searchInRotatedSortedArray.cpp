#include<iostream>
using namespace std;

 int getPivot(vector<int>& arr,int n){
      
      int s = 0;
      int e =n - 1;
      int mid = s + (e-s)/2;

      while(s<e){
      if(arr[mid]>= arr[0]){
        s= mid + 1;
      }
      else{
        e = mid;
      }
      mid = s + (e-s)/2;

      }

    return s;

 }

 int BinarySearch(vector<int>& arr,int s,int e,int key){

    int start = s;
    int end = e;

   // int mid = (start + end)/2;
      int mid = start + (end - start)/2;


    while(start <= end){

    if(arr[mid] == key){
        return mid;
    }

    if(key > arr[mid]){
       start = mid + 1;

    }
    else{
        end = mid - 1;
    }

    int mid = start + (end - start)/2;
     }

    return -1;

}

int findPosition(vector<int>& arr, int n,int k){
    int pivot = getPivot(arr,n);
    if(k >= arr[pivot] && k <= arr[n-1]){
        return binarySearch(arr,pivot,n-1,k);
    }
    else{
        return binarySearch(arr,0,pivot,k);
    }
}
int main(){

    int arr[5] = {8,10,17,1,3};
    cout<<findPositio(arr,5,3)<<endl;
}
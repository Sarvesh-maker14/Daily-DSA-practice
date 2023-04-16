#include<iostream>
using namespace std;


int peakIndexMountainArray(int arr){
    int s = 0;
    int e = arr.size() - 1;

    int mid = s + (e-s)/2;

    while(s<e){
       if(arr[mid]<arr[mid+1]){
        s = mid + 1;

       }
       else {
         e = mid;
       }

     int mid = s + (e-s)/2;

    }
   
   return s;

}
















int main(){

    int even[5] = {0,1,3,3,4};

    cout << peakIndexMountainArray(even)<<endl;

    return 0;

}
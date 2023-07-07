#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {4,5,6,7,0,1,2};
    int n = 7;
    int target = 0;
    
    int lo = 0;
    int hi = n-1;
    int pivot = -1;

    if(n==2){
        if(target==arr[0])return 0;
        else if(target==arr[1]) return 1;
        else return -1;
    }
    
    // Finding the pivot index
    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        if(mid==0) lo = mid +1;
        else if(mid == n-1) hi = mid -1;
        else if(arr[mid] < arr[mid + 1] && arr[mid] < arr[mid - 1]){
            pivot = mid;
            break;
        }
        else if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]){
            pivot = mid + 1;
            break;
        }
        else if(arr[mid] > arr[hi]){
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }

    cout << "Pivot index: " << pivot << endl;

    if(pivot == -1){ // already sorted

         lo = 0;
        hi = n - 1;
        
        while(lo <= hi){
            int mid = lo + (hi - lo) / 2;
            
            if(arr[mid] == target){
                cout << "Target found at index: " << mid << endl;
                break;
            }
            else if(arr[mid] > target){
                hi = mid - 1;
            }
            else{
                lo = mid + 1;
            }
        }
        
        if(lo > hi){
            cout << "Target element not found." << endl;
        }

    }

    // Binary search in the appropriate subarray
    if(target >= arr[0] && target <= arr[pivot - 1]){
        lo = 0;
        hi = pivot - 1;
        
        while(lo <= hi){
            int mid = lo + (hi - lo) / 2;
            
            if(arr[mid] == target){
                cout << "Target found at index: " << mid << endl;
                break;
            }
            else if(arr[mid] > target){
                hi = mid - 1;
            }
            else{
                lo = mid + 1;
            }
        }
        
        if(lo > hi){
            cout << "Target element not found." << endl;
        }
    }
    else{
        lo = pivot;
        hi = n - 1;
        
        while(lo <= hi){
            int mid = lo + (hi - lo) / 2;
            
            if(arr[mid] == target){
                cout << "Target found at index: " << mid << endl;
                break;
            }
            else if(arr[mid] > target){
                hi = mid - 1;
            }
            else{
                lo = mid + 1;
            }
        }
        
        if(lo > hi){
            cout << "Target element not found." << endl;
        }
    }

    return 0;
}

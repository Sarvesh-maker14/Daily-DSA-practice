#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int *ptr = arr;//giving pointer access to the entire array
    cout<<ptr[2];
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    cout<<&arr<<" ";//0x61fefc array ka address array ki first element ki byte ka address hota hai
    cout<<&arr[0]<<" ";//0x61fefc
    cout<<&arr[1]<<" ";
    cout<<&arr[2]<<" ";
    cout<<&arr[3]<<" ";
    cout<<&arr[4]<<" ";
    //0x61fefc  +4 => 0x61ff00 +4 => 0x61ff04 +4 => 0x61ff08 +4 => 0x61ff0c 
    return 0;
}
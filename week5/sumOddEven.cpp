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

    int sumOdd = 0;
    int sumEven = 0;

    for(int i =0;i<n;i++){
        if(i%2==0){
            sumEven = sumEven + arr[i];
        }
        else{
            sumOdd = sumOdd + arr[i];
        }
    }

    cout<<"sumEven :"<<sumEven<<endl;
    cout<<"sumOdd :"<<sumOdd<<endl;
     cout<<"Difference :"<<sumEven-sumOdd<<endl; 
       

    return 0;
}
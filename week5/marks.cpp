#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int marks[n];

    for(int i = 0;i<=n-1;i++){
        cin>>marks[i];
    }

    for(int i = 0;i<=n-1;i++){
        if(marks[i]<35) cout<<i<<" ";
    }
    return 0;
}
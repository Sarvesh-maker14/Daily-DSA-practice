#include<iostream>
using namespace std;

//row number + number of stars = n + 1;
// i +  number of stars = n + 1;
//number of stars = n + 1 -i;

int main()
{
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
   
    

    for(int i =1;i<=n;i++){
        for(int j = 1;j<=n+1-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
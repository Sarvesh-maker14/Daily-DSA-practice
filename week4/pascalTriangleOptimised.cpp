// nCr+1 = ((n-r)/(r+1))*nCr


#include<iostream>
using namespace std;



int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;

    // int r;
    // cout<<"Enter r :";
    // cin>>r;

 
   

    for(int i = 0;i<=n;i++){

        int current = 1;
        for(int j = 0;j<=i;j++){
            cout<<current;
            int next = current * (i-j)/(j+1);
            current = next;

     
        }

        cout<<endl;
    }


  
    
}
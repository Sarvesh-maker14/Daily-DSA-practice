#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;

    for(int i =1;i<=n-1;i++){


        for(int j =1;j<=i;j++){
            cout<<"*";
        }

        for(int j=1;j<=2*(n-i)-1;j++){
            cout<<" ";
        }

        for(int j =1;j<=i;j++){
            cout<<"*";
        }

        cout<<endl;
    }

    for(int i = 0;i<=2*n-1;i++){
        cout<<"*";
    }
    cout<<endl;

    for(int i = 0;i<=2*n-1;i++){
        cout<<"*";
    }
    cout<<endl;


   for(int i = 1;i<=n-1;i++){


    for(int i = 1;i<=n-i;i++){
        cout<<"*";
   }
   
   for(int i = 1;i<=2*i-1;i++){
        cout<<" ";
   }

   for(int i = 1;i<=n-i;i++){
        cout<<"*";
   }
   }
   
   cout<<endl;


    return 0;
}
#include<iostream>
using namespace std;

int fact(int x){
    int f =1;
    for(int i =2;i<=x;i++){
        f *= i;
    }
    return f;
}



int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;

    // int r;
    // cout<<"Enter r :";
    // cin>>r;

 
   

    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=i;j++){
            int nfact = fact(i);
            int rfact = fact(j);
            int nrfact = fact(i-j);

    int nCr = nfact/(rfact*nrfact);

    cout<< nCr <<" ";


        }

        cout<<endl;
    }


  
    
}
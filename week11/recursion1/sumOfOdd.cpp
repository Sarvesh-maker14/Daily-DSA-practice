
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void sumOdd(int a ,int b,int &sum){
    
        if(a>b) return ;


        if(a==b){
            if(a%2 != 0) {
                sum = sum + a;
                return;
                
            }
        }

        if(a%2 != 0){

            sum = sum + a;
            sumOdd(a+2,b,sum);

        }

        else{
            sumOdd(a+1,b,sum);
        }
}




int main()
{
    int a = 2;
    int b = 10;
    int sum = 0;
    sumOdd(a,b,sum);

    cout<<sum<<endl;
}
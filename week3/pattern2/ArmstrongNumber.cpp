#include<iostream>
using namespace std;

int main()
{   
     
    for(int i = 1;i<=500;i++){
        int temp = i;
        int sum = 0;
        while(temp){
            int digit = temp%10;
            sum = sum + (digit*digit*digit);
            temp = temp/10;
        }
        if(sum==i) cout<<i<<endl;
    }
    return 0;
}
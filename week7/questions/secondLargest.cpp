#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//string are mutable

int main()
{
    string s = "0123456789";
    
    
    int n = s.length();
    
    
   
    // for(int i = 0;i<n ;i++){
    //     if(ans < (s[i] - '0'))
    //         ans = (s[i] - '0');
    // }

      int first_max = -1;
    int second_max = -1;

    for(int i =0;i<n;i++){
        if((s[i] - '0')>first_max){
            second_max = first_max;
            first_max = (s[i] - '0');
        }

        if(second_max<(s[i] - '0') && first_max != (s[i] - '0')){
            second_max = (s[i] - '0');
        }
    }


    cout<<"secondMax is :"<<second_max;



    // cout<<ans;

    return 0;
}
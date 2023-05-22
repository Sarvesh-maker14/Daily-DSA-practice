#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
{
    string str ;
    cin>>str;
     int count = 0;
     int ans = 0;

    for(int i =0;i<str.size();i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ) 
        count++;
        else{
            ans = ans + count*(count+1)/2;
            count = 0;
        }
    }

    ans = ans + count*(count+1)/2;

    cout<<ans;
    
    
    return 0;
}
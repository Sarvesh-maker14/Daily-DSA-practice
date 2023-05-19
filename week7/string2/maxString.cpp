#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
{
    string s[] = {"0123","0023","456","00182","940","002901"};

    int m = stoi(s[0]);
    string maxString = s[0];
    for(int i = 0;i<6;i++){

        int c = stoi(s[i]);
         if(c>m){
            maxString = s[i];
            m = c;
         }
         
    }
    cout<<m<<maxString;
    
    return 0;
}
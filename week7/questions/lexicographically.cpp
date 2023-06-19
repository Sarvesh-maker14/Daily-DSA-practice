#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//string are mutable

int main()
{
    string s = "i am sarvesh";

    string word = "";
    string maxword = "";
    

    for(int i = 0;i<s.size();i++){
        if(s[i] == ' '){
            maxword = max(maxword,word);
            word = "";
        }
        else{
            word = word + s[i];
        }
    }

     maxword = max(maxword,word); 

    cout<<maxword;
    



    return 0;
}
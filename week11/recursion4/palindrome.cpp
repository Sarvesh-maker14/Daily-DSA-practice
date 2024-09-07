#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// bool isPlaindrome(string s){
//     int i = 0;
//     int j = s.length() - 1;
//     while(i<j){
//         if(s[i]!=s[j]) return false;
//         i++;
//         j--;
//     }
// }

bool isPlaindrome(string s,int i,int j){
    if(i>j) return true;
    if(s[i]!=s[j]) return false;
    else return isPlaindrome(s,i+1,j-1);
}





int main()
{
    string s = "sarvesh";
    cout<<isPlaindrome(s,0,s.length()-1);
    
}
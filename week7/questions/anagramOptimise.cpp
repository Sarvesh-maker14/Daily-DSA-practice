#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//string are mutable

int main()
{
    string s,t;
    
    cin>>s>>t;
    
    bool flag = true;
    if(s.size() != t.size())cout<<"not an anagram";
    else{
        int arr[26] = {0};
        for(int i =0;i<s.size();i++){
            arr[s[i] - 'a']++;
            arr[t[i] - 'a']--;
        }

        for(int i =0;i<26;i++){
            if(arr[i] != 0){
                flag = false;
                break;
            }
        }

        if(flag == true){
            cout<<"is anagram";
        }else{
            cout<<"not an anagram";
        }
    }

    return 0;
}
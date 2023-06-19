#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s ="AZYZXBDJKX";
    string str = "";

    for(int i =0;i<s.size();i++){
        if(s[i] >= 'X'){
            str.push_back(s[i]);
        }
    }

    cout<<str<<endl;
    cout<<str.size()<<endl;


    int k = str.size();
    for(int i =0;i<k-1;i++){

        bool flag = true;
        for(int j =0;j<k-1-i;j++){
            swap(str[j],str[j+1]);
            flag = false;
        }

        if(flag){
            break;
        }
    }

    cout<<str;
}
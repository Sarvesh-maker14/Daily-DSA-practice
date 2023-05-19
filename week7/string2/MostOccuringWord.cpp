#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//abc --> cab
//leetcode 242

int main()
{

    //split every single word and print in new line
    string s = "split every single word and and print in new line ";
    stringstream ss(s);
    string temp;
    vector<string> v;


    //cin>>  me we type then input is taken
    //ss>>  me stream is the input 

    while(ss>>temp){
        v.push_back(temp);
    }

    // for(int i = 0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }

    cout<<endl;

    sort(v.begin(),v.end());
    // for(int i = 0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }

    int maxCount = 1;
    int count = 1;
    for(int i = 1;i<v.size();i++){
        if(v[i] == v[i-1])count++;
        else count = 1;
        maxCount = max(maxCount,count);
    }

   count = 1;
    for(int i = 1;i<v.size();i++){
        if(v[i] == v[i-1])count++;
        else count = 1;
        if(count == maxCount){
            cout<<v[i]<<" "<<maxCount<<endl;
        };
    }
    
    
    return 0;
}
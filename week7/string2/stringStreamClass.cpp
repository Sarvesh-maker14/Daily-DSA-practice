#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//abc --> cab
//leetcode 242

int main()
{

    //split every single word and print in new line
    string s = "trum    trum";
    stringstream ss(s);
    string temp;

    //cin>>  me we type then input is taken
    //ss>>  me stream is the input 

    while(ss>>temp){
        cout<<temp<<endl;
    }
    
    
    return 0;
}
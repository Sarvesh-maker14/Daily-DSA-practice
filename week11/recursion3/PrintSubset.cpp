#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printSubset(string ans,string orignal){

    if(orignal.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch = orignal[0];
    printSubset(ans+ch,orignal.substr(1));
    printSubset(ans,orignal.substr(1));

}

void printSubsetA(string ans,string orignal,int idx){

    if(idx==orignal.length()){
        cout<<ans<<endl;
        return;
    }

    char ch = orignal[idx];
    printSubsetA(ans+ch,orignal,idx+1);
    printSubsetA(ans,orignal,idx+1);

}


int main()
{
    string str = "abc";
//    printSubset("",str);
   printSubsetA("",str,0);
}
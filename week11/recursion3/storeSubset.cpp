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

void printSubsetA(string ans,string orignal,int idx,vector<string>& v){

    if(idx==orignal.length()){
        cout<<ans<<endl;
        return;
    }

    char ch = orignal[idx];
    printSubsetA(ans+ch,orignal,idx+1,v);//part of the subset
    printSubsetA(ans,orignal,idx+1,v);// not part of the subset

}


int main()
{
    string str = "abc";
//    printSubset("",str);
vector<string> v;
   printSubsetA("",str,0,v);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}
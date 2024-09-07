#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void removeCharA(string ans,string orignal){

    if(orignal.length()==0){
        cout<<ans;
        return;
    }

    char ch = orignal[0];
    if(ch=='a') removeCharA(ans,orignal.substr(1));
    else removeCharA(ans+ch,orignal.substr(1));

}

void removeChar(string ans,string orignal,int idx){

    if(idx==orignal.length()){
        cout<<ans;
        return;
    }

    char ch = orignal[idx];
    if(ch=='a') removeChar(ans,orignal,idx+1);
    else removeChar(ans+ch,orignal,idx+1);

}

int main()
{
    string str = "Sarvesh";
   

   removeChar("",str,0);
}
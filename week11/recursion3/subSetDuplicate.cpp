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

void printSubsetA(string ans,string orignal,int idx,vector<string>& v,bool flag){

    if(idx==orignal.length()){
        cout<<ans<<endl;
        return;
    }

    char ch = orignal[idx];
    

    if(orignal.length() == 1){
        if(flag){
            printSubsetA(ans+ch,orignal,idx+1,v,true);
        };
        
        printSubsetA(ans,orignal,idx+1,v,true);
    }
    char dh = orignal[idx + 1];
    if(ch==dh){//duplicates
         if(flag){
            printSubsetA(ans+ch,orignal,idx+1,v,true);
        };
        printSubsetA(ans,orignal,idx+1,v,false);
        return;
    }else{
          if(flag){ // no duplicates
            printSubsetA(ans+ch,orignal,idx+1,v,true);
        };
        printSubsetA(ans,orignal,idx+1,v,true);

    }
    

}


int main()
{
    string str = "aac";
//    printSubset("",str);
vector<string> v;
   printSubsetA("",str,0,v,true);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}
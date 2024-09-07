#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void generate1(string s,int n){
    if(s.length() == n){
         
         cout<<s<<endl;
         return ;
    } 
      generate1(s+'0',n);
      generate1(s+'1',n);
}

//non consecutive  1's

void generate(string s,int n){
    if(s.length() == n){
         
         cout<<s<<endl;
         return ;
    } 

     generate(s+'0',n);
    if(s==""){
       
        generate(s+'1',n);
    }else if(s[s.length() - 1]=='0'){
         generate(s+'1',n);
    }
      
}





int main()
{
   int n = 5;
   generate("",n);
    
}
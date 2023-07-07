#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightWays = maze(sr,sc+1,er,ec);
    int downWays = maze(sr+1,sc,er,ec);

    int totalWays = rightWays + downWays;
    return totalWays;
}

int mazeTwoParameter(int er,int ec){
     if(er<1 || ec<1) return 0;
    if(er==1 && ec==1) return 1;
    int rightWays = mazeTwoParameter(er,ec-1);
    int downWays = mazeTwoParameter(er-1,ec);

    int totalWays = rightWays + downWays;
    return totalWays;
}

void printPath(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return ;
    if(sr==er && sc==ec) {
        cout<<s<<endl;
        return;
    }
    printPath(sr,sc+1,er,ec,s+'R');
    printPath(sr+1,sc,er,ec,s+'D');

    // int totalWays = rightWays + downWays;
    // return totalWays;
}

void printPathTwoParameter(int er,int ec,string s){
     if(er<1 || ec<1) return ;
    if(er==1 && ec==1) {
        cout<<s<<endl;
        return;
    }
    printPathTwoParameter(er,ec-1,s+'R');
    printPathTwoParameter(er-1,ec,s+'D');

    // int totalWays = rightWays + downWays;
    // return totalWays;
}



int main()
{
    // cout<<maze(0,0,2,2);
    // printPath(0,0,2,2,"");
    // cout<<mazeTwoParameter(3,4);
    printPathTwoParameter(3,4,"");
}
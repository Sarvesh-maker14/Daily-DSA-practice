#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int g[4] = {7,8,9,10};
    int s[4] = {5,6,7,8};
    int sg = 4;
    int ss = 4;

    // sort(g.begin(),g.end());
    // sort(s.begin(),s.end());
    // int index = -1;

    int count = 0;
    // for(int i =0;i<ss;i++){
    //     if(s[i]>=g[0]) {
    //         index = i;
    //         break;
    //     }
    // }

    // if(index==-1) return 0;

    int i =0;

    int j =0;

    while(i<4 && j<4){
        if(s[j] >= g[i]){
            count++;
            i++;
            j++;
        }
        else j++;
    }

    cout<<count;



   

    


   

} 
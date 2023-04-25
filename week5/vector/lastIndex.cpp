#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;


int main()
{
    vector<int> v;

    
    v.push_back(1);
    v.push_back(10);
    v.push_back(10000);
    v.push_back(1000);
    v.push_back(1);
    v.push_back(15);
    v.push_back(1);
    v.push_back(155);
    int x =1;
     int index = -1;
    
    // for(int i =0;i<=v.size() - 1;i++){
    //    if(x == v.at(i)) index = i;
    // }
    // cout<<index;

    //optimise search backwards

    for(int i = v.size()-1;i>=0;i--){
       if(x == v.at(i)){index = i;
        break;
       }
    }
    cout<<index;


   

    return 0;
}
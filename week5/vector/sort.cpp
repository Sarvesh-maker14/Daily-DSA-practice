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
    cout<<v[0]<<endl;

    

    for(int i =0;i<=v.size() - 1;i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;


    sort(v.begin(),v.end());

    for(int i =0;i<=v.size()-1;i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;


    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    //since there is no size so we cannot use v[0] = 1
    //we can use push_back
    v.push_back(1);
    v.push_back(10);
    v.push_back(100);
    v.push_back(1000);
    cout<<v[0]<<endl;

    cout<<v.size()<<endl;
    cout<<v.capacity();// har iteration me double karega capacity

    for(int i =0;i<=v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    v.pop_back();//piche se hatata hai element ko

    for(int i =0;i<=v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    return 0;
}
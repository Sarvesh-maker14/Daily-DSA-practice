#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(6,7);// initial size 6 each value as 7 
     for(int i =0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
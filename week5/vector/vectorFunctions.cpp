#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

//vectors are passed by values each time we pass new vector is created

void change(vector<int> a ){//vector copy hua hai
    a[0] = 56;

    for(int i =0;i<=a.size() - 1;i++){
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> v;

    
    v.push_back(1);
    v.push_back(10);
    v.push_back(10000);
    v.push_back(1000);
    cout<<v[0]<<endl;

    change(v);
    for(int i =0;i<=v.size() - 1;i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;


   

    return 0;
}
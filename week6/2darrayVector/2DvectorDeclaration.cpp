#include<iostream>
#include<vector>
using namespace std;



int main()
{
     //vector<int> v; 1D vector

     //initialise vector
     //vector<int> v( vector size, jo element store karna hai);      
    //  vector<int> v(5,2);
     // 5 index with element 2 in it

    //vector< vector<int> > v(jitne vector store karne hai (rows) , vector jo store karna hai (columns))
    vector< vector<int> > v(5,vector<int> (4)); // 5*4
    //5 vector 4 size wale
    vector< vector<int> > v1(5,vector<int> (4,2));//2 repeating element
    cout<<v.size();//rows
    cout<<v[0].size();//columns


    //  cout<<v[0]<<" ";
    //  cout<<v[1]<<" ";
    //  cout<<v[2]<<" ";
    //  cout<<v[3]<<" ";
    //  cout<<v[4]<<" ";

}
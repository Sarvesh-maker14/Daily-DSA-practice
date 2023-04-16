#include<iostream>
using namespace std;


//program to check whether a character is an alphabet or not
int main()
{
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    // cout<<ch<<endl;
    // cout<<(int)ch;//type cast converting into ascii
    int ascii = (int)ch;//type cast converting

    if(ascii>=97 && ascii<=122){
        cout<<"the character is lower case alphabet";
    }
    if(ascii>=65 && ascii<=90){
         cout<<"the character is upper case alphabet";
    }
    return 0;
}
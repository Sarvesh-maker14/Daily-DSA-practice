#include<iostream>
using namespace std;

int main()
{
    //string are chracter array

    // \n -- next line
    // \t -- tab space
    // \0 -- null character


    // char ch = '\0';
    // cout<<(int)ch; //0

    //extra '\0' in every char array {'a','b','c','d','\0'}
    char str[8] = {'a','b','c','\0','d'};
    // cout<<(int)(str[4]);

    // for(int i =0;str[i]!='\0';i++){
    //     cout<<str[i];
    // }

    cout<<str;


    // char str[4] = {'a','b','c','d'};
    // char str[5] = "abcd";
    // for(int i =0;i<4;i++){
    //     cout<<str[i];
    // }
    return 0;
}
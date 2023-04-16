#include<iostream>
using namespace std;

int main(){
   
//    int num = 5;
//    cout << num << endl;
//    cout <<"address of num is" << &num << endl;

//    int *ptr = &num;

//    cout <<"*ptr:" << *ptr << endl;
//    cout <<"&num:" << &num << endl;
//    cout <<"ptr:" << ptr << endl;

  int i = 7;
  int *p = &i;
  p = p +1;
   

  cout << *p << endl;
  cout << &i << endl;


   return 0;

}
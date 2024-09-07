#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{ 
public:
    int val;
    Node* next; 

    //creating a constructor
    Node(int val){
        this->val = val;
        this->next = NULL; //har baar jab node bane to uke next pe NUlL pre defined ho
    }
    
};


int main()
{
  
  Node a(10);
  //linking node 

   Node b(20);
  a.next = &b; // a ke next me b ka address

  Node c(40);
  //linking node 
  b.next = &c; // b ke next me c ka address

  Node d(70);
  //linking node 
  c.next = &d; // c ke next me d ka address


  //linking node 
//   d.next = NULL // d ke next me NULL

 // (*ptr). === ptr->

  // cout<<(b.next)->val<<endl;

  // cout<<((a.next)->next)->val;

  Node temp = a;
  while(1){
      cout<<temp.val<<" ";
      if(temp.next == NULL) break;
      temp = *(temp.next); // temp.next --> &b --> *(&b)
  }

}


   
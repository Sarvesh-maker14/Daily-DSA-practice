

// 0   1   2    3   4   5   6  7
// 10->20->30->40->50->60->70->80->NULL


// l=3 r=5

// n =1


// 0   1   2    3   4   5   6  7
// 10->20->30->40->50->60->70->80->NULL
//     a    b       c   d
// t

// if(n==l-1) a = temp;
// if(n==l) b = temp;
// if(n==r)c = temp;
// if(n==r+1) d = temp;
//temp = temp -> next;
//n++

//#hint break the list into 3 lists 
// 1 to l-1
//l to r
//r+1 to n


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

void display(Node* head){
    if(head == NULL) return;
    cout<<head->val<<" ";
     display(head->next);

     cout<<endl;
   
}



int size(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
      temp = temp->next;
        count++;

    }
    return count;

}

Node* revrseList(Node* head){
  Node* prev = NULL;
  Node* curr = head;
  Node* Next = head;

  while(curr){
    Next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = Next;
  }
  return prev;
}

Node* revrseListBetween(Node* head,int left,int right){
  if(left==right) return head;
  Node* a = NULL;
  Node* b = NULL;
  Node* c = NULL;
  Node* d=  NULL;
  Node* temp = head;

  int n =1;

  while(temp!=NULL){
    if(n==left-1) a = temp;
    if(n==left) b = temp;
    if(n==right) c = temp;
    if(n==right+1) d =temp;
    temp = temp->next;
    n++;
  }

  a->next = NULL;
  c->next = NULL;
  c = revrseList(b);
  a->next = c;
  b->next = d;
  return head;


}

int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);  // Different value than Node* b
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    Node* originalHead = a;
    cout << "Original List: ";
    display(originalHead);

    // Node* reversedHead = revrseList(originalHead);
    // cout << "Reversed List: ";
    // display(reversedHead);
    display(revrseListBetween(a,1,3));


    return 0;
}


   
// Method1 creating a deep copy 

// 1->2->3->2->1->NULL;
//             t

// 0->1->2->3->2->1->NULL deep copy
//    c            tc







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

Node* reverseList(Node* head){
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

bool isPalindrome(Node* head){
    Node* c = new Node(10);
    //deep copy of head
    Node* temp = head;
    Node* tempC = c;
    while(temp){
        Node* node = new Node(temp->val);
        tempC->next = node;
        temp = temp->next;
        tempC = tempC->next;
    }
    c = c->next;
    c = reverseList(c);
    Node* a = head;
    Node* b = c;

    while(a){
        if(a->val != b->val) return false;
        a = a->next;
        b = b->next;
    }
    return true;

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

    cout<<isPalindrome(originalHead);

    return 0;
}


   
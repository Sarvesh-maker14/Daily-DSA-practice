// 1->2->3->3->2->1->NULL;


//if the first half and seconf half are reverse of each other then it is a palindrome



// 1->2->3  (reverse) 3->2->1

// 3->2->1    NULL<-3<-2<-1
//       a          b     nh

// 1->2->3->1->2->3->NULL;
//          nh    b
    
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
    

    //middle of a linkedList
    Node* slow = head;
    Node* fast = head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    //slow is at the left middle

    Node* newHead = reverseList(slow->next);
    Node* a = head;
    Node* b = newHead;

    while(b){
        if(a->val != b->val)return false;
        a = a->next;
        b= b->next;
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


   
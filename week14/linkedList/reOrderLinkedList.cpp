// 1->2->3->4->5->6
// 1->6->2->5->3->4



// 1->2->3->4->5->6
//       |
//       left middle

// 1->2->3->(6->5->4) reverse


// split  (1->2->3)  (6->5->4)
//         a          b
//         ta         tb

// -----------------------------------------------
        
//          a
//         (1->2->3)
//          ta

// c
// 0           
// tc
//          b
//         (6->5->4)
//          tb

// ------------------step 1--------------------------------
// tc->next = ta;
// tc=tc->next;
// ta=ta->next;

//    tc
// c  a  ta    
// 0->1->2->3->NULL
   
// -------------------step 2-------------------------------

// tc->next = tb
// tc = tc->next;
// tb = tb->next;


// c  a  ta    
// 0->1  2->3->NULL
//    |
//    6->5->4->NULL
//    b  tb
//    tc
// ---------------------step 3 --> (step 1)----------------------------------
// tc->next = ta;
// tc=tc->next;
// ta=ta->next;

// c  a  tc ta    
// 0->1  2->3->NULL
//    |  |
//    -> 6  5->4->NULL
//       b  tb


// -----------------------step 4 -->(step 2)------------------------------------ 


// tc->next = tb
// tc = tc->next;
// tb = tb->next;


// c  a              ta    
// 0->1  2->          3->NULL
//    |  |  |
//    -> 6  5->4->NULL
//       b  tc tb

// -------------------------step 5 --> (step 1)---------------------------------------

// tc->next = ta;
// tc=tc->next;
// ta=ta->next;


// c  a                  
// 0->1  2->          
//    |  |  |  tc  ta
//    -> 6  5->3->NULL        4->NULL
//       b                    tb

// -----------------------------Step 6 --> (Step 2)---------------------------------------------

// tc->next = tb
// tc = tc->next;
// tb = tb->next;

// c  a                  
// 0->1  2->                        ta
//    |  |  |     tc               NULL 
//    -> 6  5->3->4->NULL
//       b            tb

// --------------------------------------------------------------------------------------


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

void reOrderList(Node* head){
  
//middle of a linkedList
    Node* slow = head;
    Node* fast = head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    //slow is at the left middle

    Node* b = reverseList(slow->next);
    Node* a = head;

    slow->next = NULL;
    //merge these two alternatively

    Node* c = new Node(100);
    Node* tempC= c;
    Node* tempA = a;
    Node* tempB = b;

    while(tempA && tempB){
        tempC->next = tempA;
        tempA=tempA->next;
        tempC=tempC->next;

         tempC->next = tempB;
        tempB=tempB->next;
        tempC=tempC->next;
    }

    tempC->next = tempA;
    head =  c->next;




    
  
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

    reOrderList(originalHead);
    cout << "reOrderList: ";
    display(originalHead);

    return 0;
}


   
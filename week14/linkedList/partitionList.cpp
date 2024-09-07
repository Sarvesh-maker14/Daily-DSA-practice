// 10 -> 80 -> 40 -> 30 -> 60 -> 70 -> 15 -> NULL    x=41
// ^            ^     ^                 ^       //elements less than 41

// 10 -> 40 -> 30   -> 80 -> 60 -> 70 -> 15 -> NULL //aisa chaiye

// farzi node 0

// lo  // jo number 41 se chote hai
// 0
// tl


// hi // jo number 41 se bade hai
// 0
// th

// ----------------------------------------------------------
// if  10(value at t) < 41

//             h
// lo          10 -> 80 -> 40 -> 30 -> 60 -> 70 -> 15 -> NULL
// 0           t
// tl           

// tl -> next = t;
// t = t->next;
// tl = tl->next;

// lo
// 0  -> 10 -> 80 -> 40 -> 30 -> 60 -> 70 -> 15 -> NULL
//       tl    t

// hi
// 0
// th

// --------------------------------------------------------------------------
// if  80(value at t) > 41


// lo
// 0  -> 10 -> 80 -> 40 -> 30 -> 60 -> 70 -> 15 -> NULL
//       tl    t

// hi
// 0 
// th


// th -> next = t;
// t = t->next;
// th = th->next;


// lo
// 0  -> 10 -> 80 -> 40 -> 30 -> 60 -> 70 -> 15 -> NULL
//       tl    th    t
//             ^
// hi          |
// 0 -----------

// --------------------------------------------------------------------
// if  40(value at t) < 41


// lo
// 0  -> 10 -> 80 -> 40 -> 30 -> 60 -> 70 -> 15 -> NULL
//       tl    th    t
//             ^
// hi          |
// 0 -----------

// tl -> next = t;
// t = t->next;
// tl = tl->next;

//       -------------
// lo    |           |
// 0  -> 10    80 -> 40 -> 30 -> 60 -> 70 -> 15 -> NULL
//             th    tl     t
//             ^
// hi          |
// 0 -----------


// --------------------------------------------------------------------
// if  30(value at t) < 41

//       -------------
// lo    |           |
// 0  -> 10    80 -> 40 -> 30 -> 60 -> 70 -> 15 -> NULL
//             th    tl     t
//             ^
// hi          |
// 0 -----------


// tl -> next = t;
// t = t->next;
// tl = tl->next;


//       -------------
// lo    |           |
// 0  -> 10    80 -> 40 -> 30 -> 60 -> 70 -> 15 -> NULL
//             th          tl     t
//             ^
// hi          |
// 0 -----------


// --------------------------------------------------------------------
// if  60(value at t) > 41

//       -------------
// lo    |           |
// 0  -> 10    80 -> 40 -> 30 -> 60 -> 70 -> 15 -> NULL
//             th          tl     t
//             ^
// hi          |
// 0 -----------



// th -> next = t;
// t = t->next;
// th = th->next;


//       -------------
// lo    |           |           th    t
// 0  -> 10    80    40 -> 30 -> 60 -> 70 -> 15 -> NULL
//                         tl     ^
//             ^ |________________|
// hi          |
// 0 -----------


// --------------------------------------------------------------------
// if  70(value at t) > 41


//       -------------
// lo    |           |           th    t
// 0  -> 10    80    40 -> 30 -> 60 -> 70 -> 15 -> NULL
//                         tl     ^
//             ^ |________________|
// hi          |
// 0 -----------



// th -> next = t;
// t = t->next;
// th = th->next;

//       -------------
// lo    |           |                 th    t
// 0  -> 10    80    40 -> 30 -> 60 -> 70 -> 15 -> NULL
//                         tl     ^
//             ^ |________________|
// hi          |
// 0 -----------

// ----------------------------------------------------------------------------
// if  15(value at t) < 41

//       -------------
// lo    |           |                 th    t
// 0  -> 10    80    40 -> 30 -> 60 -> 70 -> 15 -> NULL
//                         tl     ^
//             ^ |________________|
// hi          |
// 0 -----------



// tl -> next = t;
// t = t->next;
// tl = tl->next


//                          ------------------
//       -------------      |                |
// lo    |           |      |          th    tl     t
// 0  -> 10    80    40 -> 30    60 -> 70 -> 15 -> NULL
//                                ^
//             ^ |________________|
// hi          |
// 0 -----------

// --------------------------------------------------------------------
// th->next = NULL;
// tl->next = NULL;


//                          --------------------------
//       -------------      |                        |
// lo    |           |      |          th            tl     t
// 0  -> 10    80    40 -> 30    60 -> 70->NULL      15 -> NULL
//                                ^
//             ^ |________________|
// hi          |
// 0 -----------


// --------------------------------------------------------------------
// lo = lo->next;
// hi = hi->next;


//                          --------------------------
//       -------------      |                        |
//       lo           |     |          th            tl     t
// 0  -> 10    80    40 -> 30    60 -> 70->NULL      15 -> NULL
//             hi                 ^
//             ^ |________________|
//             |
// 0 -----------


// tl->next = hi;

//                          --------------------------
//      ---------------     |                        |
//       lo           |     |          th            tl     
// 0  -> 10           40 -> 30                       15 
//             ______________________________________|                                      
//             |
//             |
//             80                60 -> 70->NULL      
//             hi                 ^
//             ^ |________________|
//             |
// 0 -----------



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

Node* partition(Node* head , int x ){
      
      Node* lo = new Node(0);
      Node* hi = new Node(0);

      Node* tempLo = lo;
      Node* temphi = hi;

      Node* temp = head;

      while(temp!=NULL){
        if(temp->val < x){
            tempLo->next = temp;
            temp = temp->next;
            tempLo = tempLo->next;
        }
        else{
            temphi->next = temp;
            temp = temp->next;
            temphi = temphi->next;
        }
      }

      tempLo->next = hi->next;
      temphi->next = NULL;

      return lo->next;

}






int main()
{
    Node* a = new Node(10);//ek address bana jisme ek node store hua
                            //(Node* a) me node ka address store hota hai
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);


    Node* l = new Node(100);//ek address bana jisme ek node store hua
                            //(Node* a) me node ka address store hota hai
    Node* m = new Node(200);
    Node* n = new Node(300);
    
    
    //a,b,c,d ---> yeh sab address store kar rahe hai

    a->next = b; //(*a).next --> a ke next me b ko daal do
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    l->next = m; //(*a).next --> a ke next me b ko daal do
    m->next = n;
    
    // insertAtEnd(a,70);
    Node* headA = a;
    Node* headB = l;
    display(headA);
    display(partition(headA,41));
    
   
    // cout<<size(a);

}
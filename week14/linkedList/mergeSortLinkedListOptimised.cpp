// 1 -> 2 -> 5 -> NULL ///// linked list A


// 2 -> 3 -> 4 -> 6 -> NULL ///// linked list B


// ----------creating linked list C-------------------------------
// c
// 100       //extra node 
// temp
// --------------------PASS 1---------------------------------------
// compare a and b --> b(2) > a(1)

// tempC->next =  a;
// a = a->next;
// tempC = tempC->next;


//             a
// 100 -> 1 -> 2 -> 5 -> NULL ///// linked list A
//       tempC 

// b
// 2 -> 3 -> 4 -> 6 -> NULL ///// linked list B
// ----------------------------------------------------------------------
// --------------------PASS 2---------------------------------------
// compare a and b --> a(2) = b(2)

// tempC->next =  a;
// a = a->next;
// tempC = tempC->next;


//                  a
// 100 -> 1 -> 2 -> 5 -> NULL ///// linked list A 
//           tempC 

// b
// 2 -> 3 -> 4 -> 6 -> NULL ///// linked list B
// ----------------------------------------------------------------------
// --------------------PASS 3---------------------------------------
// compare a and b --> a(5) > b(2)

// tempC->next =  b;
// b = b->next;
// tempC = tempC->next;


//                  a
// 100 -> 1 -> 2    5 -> NULL ///// linked list A 
//             |
//             |
//           tempC  b
//             2 -> 3 -> 4 -> 6 -> NULL ///// linked list B
// ----------------------------------------------------------------------
// --------------------PASS 4---------------------------------------
// compare a and b --> a(5) > b(3)

// tempC->next =  b;
// b = b->next;
// tempC = tempC->next;


//                  a
// 100 -> 1 -> 2    5 -> NULL ///// linked list A 
//             |
//             |
//                tempC  b
//             2 -> 3 -> 4 -> 6 -> NULL ///// linked list B
// ----------------------------------------------------------------------
// --------------------PASS 5---------------------------------------
// compare a and b --> a(5) > b(4)

// tempC->next =  b;
// b = b->next;
// tempC = tempC->next;


//                  a
// 100 -> 1 -> 2    5 -> NULL ///// linked list A 
//             |
//             |
//                     tempC  b
//             2 -> 3 -> 4 -> 6 -> NULL ///// linked list B
// ----------------------------------------------------------------------
// --------------------PASS 6---------------------------------------
// compare a and b --> a(5) < b(6)

// tempC->next =  a;
// a = a->next;
// tempC = tempC->next;


//                      tempC  a
// 100 -> 1 -> 2         5 -> NULL ///// linked list A 
//             |         ^
//             |         |
//                            b
//             2 -> 3 -> 4    6 -> NULL ///// linked list B
// ----------------------------------------------------------------------
// --------------------PASS 7---------------------------------------
// a == NULL
// tempC->next = b;

//                      tempC 
// 100 -> 1 -> 2         5 -> 6 -> NULL 
//             |         |
                           
//             2 -> 3 -> 4    
// ----------------------------------------------------------------------









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

Node* mergeSortList(Node* a , Node* b){
      
      Node* c = new Node(100);
      Node* tempC = c;

      while(a!=NULL && b!=NULL){
        if(a->val <= b->val){
            tempC->next = a;
            a = a->next;
            tempC = tempC->next;

        }else{
            tempC->next = b;
            b = b->next;
            tempC = tempC->next;
        }
      
      }

      if(a==NULL){
        tempC->next = b;
      }
      else{
        tempC->next = a;
      }

      return c->next;

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
    display(headB);
    display(mergeSortList(headA,headB));
   
    // cout<<size(a);

}


   























   
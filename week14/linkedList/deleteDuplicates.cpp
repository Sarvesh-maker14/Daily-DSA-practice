// head
// 10->10->10->20->20->30->40->40->NULL
// a
//     b

// while(b->val==a->val) b = b->next;


// head
// 10->10->10->20->20->30->40->40->NULL
// a
//     b

// head
// 10->10->10->20->20->30->40->40->NULL
// a
//          b

// head
// 10->10->10->20->20->30->40->40->NULL
// a
//              b

// a->next = b

// a=b;

// head
// 10->10->10->20->20->30->40->40->NULL
//              a
//              b

// b=b->next
// head
// 10->10->10->20->20->30->40->40->NULL
//              a
//                  b

// head
// 10->10->10->20->20->30->40->40->NULL
//              a
//                  b


// head
// 10->10->10->20->20->30->40->40->NULL
//              a
//                      b

// a->next = b

// a=b;

// head
// 10->10->10->20->20->30->40->40->NULL 
//                      a
//                      b

// head
// 10->10->10->20->20->30->40->40->NULL
//                      a
//                      b

// b=b->next

// head
// 10->10->10->20->20->30->40->40->NULL
//                      a
//                          b

// head
// 10->10->10->20->20->30->40->40->NULL
//                      a
//                              b
// a->next = b

// a=b;
// head
// 10->10->10->20->20->30->40->40->NULL
//                              a
//                              b



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

Node* deleteDuplicates(Node* head){
    if(head==NULL || head->next==NULL) return head;
    Node* a = head;
    Node* b = head->next;
    while(b!=NULL){
        while(b != NULL && b->val == a->val){
            b = b->next;
        }
        a->next = b;
        a = b;
        if(b!=NULL)b = b->next;
    }
    return head;
}










int main()
{
    Node* a = new Node(10);//ek address bana jisme ek node store hua
                            //(Node* a) me node ka address store hota hai
    Node* b = new Node(20);
    Node* c = new Node(20);
    Node* d = new Node(40);
    Node* e = new Node(50);
    
    //a,b,c,d ---> yeh sab address store kar rahe hai

    a->next = b; //(*a).next --> a ke next me b ko daal do
    b->next = c;
    c->next = d;
    d->next = e;
    // insertAtEnd(a,70);
    Node* head = a;
    display(head);
  
    display(deleteDuplicates(head));
   
    // cout<<size(a);

}


   
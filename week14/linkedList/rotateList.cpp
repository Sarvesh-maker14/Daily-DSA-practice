// 1->2->3->4->5->NULL   k = 2
//          ^  ^

// 4->5->1->2->3->->NULL   k = 2


// |-----n-----|
// 4->5->1->2->3->NULL  
// |        |  |
//    (n-k)   k


// 1 -> 2 -> 3 -> 4 -> 5 -> NULL     k = 2
// head     temp      tail

// ******tail->next = head;*********

// 1 -> 2 -> 3 -> 4 -> 5 -> NULL    
// head     temp      tail
// ^___________________|

// *********head = temp->next;***********

// 1 -> 2 -> 3 -> 4 -> 5 -> NULL    
//          temp head tail
// ^___________________|


// *************temp->next = NULL*************

// 1 -> 2 -> 3 ->NULL     4 -> 5   
//          temp         head tail  ====>   4 -> 5 -> 1 -> 2 -> 3 -> NULL;
// ^___________________________|


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

Node* rotateRight(Node* head,int k){
   //length of the list
   if(head==NULL || head->next==NULL) return head;

   int n = 0;
   Node* temp = head;
   Node* tail = NULL;
   while(temp!=NULL){
      if(temp->next==NULL) tail = temp;
      temp = temp->next;
      n++;
   }
   k = k%n;
   if(k==0) return head;

   temp = head;
   for(int i = 1;i<n-k;i++){
      temp = temp->next;
   }

   tail->next = head;
   head = temp->next;
   temp->next = NULL;
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
  
    display(rotateRight(head,2));
   
    // cout<<size(a);

}


   
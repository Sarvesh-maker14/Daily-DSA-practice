// 1 -> 2 -> 5 -> NULL ///// linked list A
// tempA

// 2 -> 3 -> 4 -> 6 -> NULL ///// linked list B
// tempB

// ----------creating linked list C-------------------------------

// -1       //extra node 
// tempC

// compare tempA and tempB --> tempB(2) > tempA(1)

// -1 -> 1 -> NULL
//      tempC



// ------------------PASS 1---------------------------------------------
// compare tempA and tempB --> tempB(2) > tempA(1)

// 1 -> 2 -> NULL   //// creating linked list C

// tempA = tempA->next;

// -----------------------------------------------------------------------
// ---------------Current State-------------------------------------------
// 1 -> 2 -> 5 -> NULL ///// linked list A
//     tempA

// 2 -> 3 -> 4 -> 6 -> NULL ///// linked list B
// tempB
// ---------------------------------------------------------------------------

// -----------------------PASS 2------------------------------------------------
// tempA(2) == tempB(2)

// 1 -> 2 -> 2 -> NULL   //// creating linked list C

// tempA = tempA->next;

// ---------------Current State-------------------------------------------
// 1 -> 2 -> 5 -> NULL ///// linked list A
//         tempA

// 2 -> 3 -> 4 -> 6 -> NULL ///// linked list B
// tempB
// ---------------------------------------------------------------------------
// -----------------------PASS 3------------------------------------------------
// tempA(5) > tempB(3)

// 1 -> 2 -> 2 -> 3 -> NULL   //// creating linked list C

// tempB = tempB->next;

// ---------------Current State-------------------------------------------
// 1 -> 2 -> 5 -> NULL ///// linked list A
//         tempA

// 2 -> 3 -> 4 -> 6 -> NULL ///// linked list B
//    tempB
// ---------------------------------------------------------------------------
// -----------------------PASS 4------------------------------------------------
// tempA(5) > tempB(3)

// 1 -> 2 -> 2 -> 3 -> NULL   //// creating linked list C

// tempB = tempB->next;

// ---------------Current State-------------------------------------------
// 1 -> 2 -> 5 -> NULL ///// linked list A
//         tempA

// 2 -> 3 -> 4 -> 6 -> NULL ///// linked list B
//         tempB
// ---------------------------------------------------------------------------        
// -----------------------PASS 4------------------------------------------------
// tempA(5) > tempB(4)

// 1 -> 2 -> 2 -> 3 -> 4 -> NULL   //// creating linked list C

// tempB = tempB->next;

// ---------------Current State-------------------------------------------
// 1 -> 2 -> 5 -> NULL ///// linked list A
//         tempA

// 2 -> 3 -> 4 -> 6 -> NULL ///// linked list B
//              tempB
// ---------------------------------------------------------------------------             
// -----------------------PASS 5------------------------------------------------
// tempA(5) < tempB(6)

// 1 -> 2 -> 2 -> 3 -> 4 -> 5 -> NULL   //// creating linked list C

// tempA = tempA->next;

// ---------------Current State-------------------------------------------
// 1 -> 2 -> 5 -> NULL ///// linked list A
//                tempA

// 2 -> 3 -> 4 -> 6 -> NULL ///// linked list B
//              tempB
// ---------------------------------------------------------------------------

// if temp A --> NULL tempB ke baad saari vakues utha ke rakh do

// -----------------------PASS 5------------------------------------------------
// tempB(6)

// 1 -> 2 -> 2 -> 3 -> 4 -> 5 -> 6 -> NULL   //// creating linked list C

// list1 = [0,1,2,3,4,5]
//         0  1 2  3 4 5

// list2 = [1000000,1000001,1000002]
//           0        1       2

//  a = 3, b = 4 


// Output: [0,1,2,1000000,1000001,1000002,5]


// algo 
//         0  1  2  3  4  5
// List1 : 0->1->2->3->4->5
//         head
//         prev 
//         cur

// //  a = 1, b = 3

//         0  1  2  3  4  5
// List1 : 0->1->2->3->4->5
//         head
//         prev(0) 
//                     cur(4)


// prev ko a -1 steps lena hai 
// cur ko b+1 steps lena hai

// List2 : 1000000->1000001->1000002


// 1)prev -> next =  head(list2)
// 2)temp->next = cur





// finding middle of the linkedList + delete the middle Node

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
      Node* tempA = a;
      Node* tempB = b;
      Node* c = new Node(-1);
      Node* tempC = c;

      while(tempA!=NULL && tempB!=NULL){
        if(tempA->val<=tempB->val){
            Node* t = new Node(tempA->val);
            tempC->next = t;
            tempC = t;
            tempA = tempA->next;
        }
        else{
            Node* t = new Node(tempB->val);
            tempC->next = t;
            tempC = t;
            tempB = tempB->next;
        }
      }

      if(tempA==NULL){
        tempC->next = tempB;
      }
      else{
        tempC->next = tempA;
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


   























   
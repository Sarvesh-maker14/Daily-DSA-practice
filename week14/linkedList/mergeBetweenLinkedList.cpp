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

Node* mergeBetweenList(Node* headA ,int a,int b, Node* headB){
        Node *curr = headA , *curr2 = headA;
        a = a-1;
        b= b+1;

        while(a--){
            curr = curr->next;

        }

        // curr = headA;
        while(b--){
            curr2 = curr2->next;
        }

        Node* temp = headB;

        while(temp->next)temp = temp->next;

        temp->next = curr2;

        curr->next = headB;

        return headA;
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
    display(mergeBetweenList(headA,2,3,headB));
   
    // cout<<size(a);

}


   
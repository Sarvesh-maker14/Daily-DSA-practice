// 1->2->3->4->4
// ^
// curr

// swapping nodes 

// 1 -> 2 -> 3 -> 4 -> 5  (k = 2)
//      ^         ^    swap 2 and 4
// 1 -> 4 -> 3 -> 2 -> 5 


// Method(1) Brute force approach

// kth node pe jaana i.e. (2) --> k-1 steps 
// kth node from end jaana i.e. (4) --> length - k + 1 steps

// k=k-1;
// node* temp = head;
// while(k--){
//     temp = temp->next;
// }
// int count = 0;
// temp2 = head;
// while (temp2){
//     count++;
//     temp2 = temp2->next;
// }

//Method(2) optimised approach
    
//         temp
// // 1 -> 2 -> 3 -> 4 -> 5 -> NULL (k=2)
//    ^         ^
//    p2(head)  p1(p1 ko temp ke next pe rakna hai)
// jab tak p1 null na hojae p1 aur p2 ko ek ek step badhate raho
   

//    <----------n-------->


// 1 -> 3 -> 2 -> 5 -> 9 -> 6 -> 11 -> 10 -> 8 -> NULL  k=4 
//               temp
// 1 -> 3 -> 2 -> 5 -> 9 -> 6 -> 11 -> 10 -> 8 -> NULL
// p2                  p1

// 1 -> 3 -> 2 -> 5 -> 9 -> 6 -> 11 -> 10 -> 8 -> NULL
//      p2                  p1

// 1 -> 3 -> 2 -> 5 -> 9 -> 6 -> 11 -> 10 -> 8 -> NULL
//           p2                  p1
               
// 1 -> 3 -> 2 -> 5 -> 9 -> 6 -> 11 -> 10 -> 8 -> NULL
//                p2                   p1

// 1 -> 3 -> 2 -> 5 -> 9 -> 6 -> 11 -> 10 -> 8 -> NULL
//                     p2                    p1

// 1 -> 3 -> 2 -> 5 -> 9 -> 6 -> 11 -> 10 -> 8 -> NULL
//                          p2                    p1
//                         (n-k)th node pe hai --> kth node from the head

// temp pe kth node aur p2 pe (n-k)th node 





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



Node* removeElements(Node* head ,int val){
    Node *curr = head;

    while(curr and curr->val == val){
        curr = curr->next;
    }

    head = curr;

    while(curr){
        if(curr->next and curr->next->val == val){
            curr->next = curr->next->next;
        }else curr = curr->next;
    }

    return head;
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
    Node* head = a;
  
    display(head);
    display(removeElements(head,20));
   
    // cout<<size(a);

}
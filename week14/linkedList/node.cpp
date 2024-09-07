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

// void display(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->val<<" ";
//         temp = temp->next;

//     }
//     cout<<endl;
// }

//displaying linked list recursively
void display(Node* head){
    if(head == NULL) return;
    cout<<head->val<<" ";
     display(head->next);
   
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

void insertAtEnd(Node* head,int val){
    Node* t = new Node(val);
    while(head->next != NULL){
        head = head->next;
    }
        head->next = t;
}

int main()
{
    Node* a = new Node(10);//ek address bana jisme ek node store hua
                            //(Node* a) me node ka address store hota hai
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    
    //a,b,c,d ---> yeh sab address store kar rahe hai

    a->next = b; //(*a).next --> a ke next me b ko daal do
    b->next = c;
    c->next = d;
    insertAtEnd(a,70);
    display(a);
    cout<<size(a);

}


   
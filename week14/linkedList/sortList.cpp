//5 -> 1 -> 3 -> 6 -> 2 -> 4 -> NULL
//                 merge sort

// 5 -> 1 -> 3 -> NULL       6 -> 2 -> 4 -> NULL

// 1 -> 3 -> 5 -> NULL       2 -> 4 -> 6 -> NULL

//           |------merge-----|

// 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> NULL


//           t    b
// 5 -> 1 -> 3 -> 6 -> 2 -> 4 -> NULL
//           ^
//        left middle


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




Node* sortList(Node* head){

    if(head==NULL || head->next == NULL) return head;
    
    //middle nikal lete hai
    Node* slow = head;
    Node* fast = head;

    while(fast->next!=NULL and fast->next->next!=NULL){
        slow= slow->next;
        fast= fast->next->next;
    }

    //slow pointer is at left middle
    Node* a = head;
    Node* b = slow->next;
    slow->next = NULL;

    a = sortList(a);
    b= sortList(b);

    Node* c = mergeSortList(a,b);

    return c;


}





int main()
{
    Node* a = new Node(10);//ek address bana jisme ek node store hua
                            //(Node* a) me node ka address store hota hai
    Node* b = new Node(2000);
    Node* c = new Node(302);
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
    // display(headA);

    // display(headB);
    // display(mergeSortList(headA,headB));

    //  vector<Node*> lists = { headA, headB };
    // Node* mergedList = mergeKLists(lists);

    display(sortList(a));


    // display(mergedList);
   
    // cout<<size(a);

}


   























   
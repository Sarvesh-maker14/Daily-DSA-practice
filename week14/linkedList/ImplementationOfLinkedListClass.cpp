// user defined data structure
// 10->20->30
// LinkedList ll;
// ll.add(60); 10->20->30->60
// ll.addAtHead(90); 90->10->20->30->60
// ll.deleteAt(2); 90->10->30->60
// ll.insertAt(3,80); 90->10->30->80->60

//--------------------- ll.insertAtEnd(val); --Case 1 when size > 0-----------------------------------------------------
//
// 10(head)->20->30(tail)->NUll

// val = 40;

// --Algo--------------------------
// Node * temp = new Node(40); -- 40->NULL
// tail -> next = temp; -- 10(head)->20->30(tail)->40->NULL
// tail = temp -- 10(head)->20->30->40(tail)->NUll
// size++
//-----------------------------------
//
// ---------------------------------------------------------

//--------------------- ll.insertAtEnd(val); --Case 2 when size = 0-----------------------------------------------------
//
// NUll(head/tail)

// val = 40;

// --Algo--------------------------
// Node * temp = new Node(40); -- 40->NULL
// head = tail = temp; -- 40(head/tail)->NULL
// size++
//-----------------------------------
//
// ---------------------------------------------------------

//--------------------- ll.insertAtBeginning(val); --Case 1 when size > 0-----------------------------------------------------
//
// 10(head)->20->30(tail)->NUll

// val = 40;

// --Algo--------------------------
// Node * temp = new Node(40); -- 40->NULL
// temp -> next = head; -- 40->10(head)->20->30(tail)->NULL
//  head = temp -- 40(head)->10->20->30->40(tail)->NUll
// size++
//-----------------------------------
//
// ---------------------------------------------------------

//--------------------- ll.insertAtBeginning(val); --Case 2 when size = 0-----------------------------------------------------
//
// NUll(head/tail)

// val = 40;

// --Algo--------------------------
// Node * temp = new Node(40); -- 40->NULL
// head = tail = temp; -- 40(head/tail)->NULL
// size++
//-----------------------------------
//
// ---------------------------------------------------------

//--------------------- ll.deleteAtHead(val); --Case 1 when size > 1-----------------------------------------------------
//
// 10(head)->20->30(tail)->NUll


// --Algo--------------------------
// head = head->next  ---10->20(head)->30(tail)->NUll
// size--
//-----------------------------------
//
// ---------------------------------------------------------

//--------------------- ll.deleteAtTail(val); --Case 1 when size > 1-----------------------------------------------------
//
// 10(head)->20->30(tail)->NUll


// --Algo--------------------------
//  Node* Temp = head; --10(head)->20->30(tail)->NUll
//         while(Temp->next!=tail){
//             Temp = Temp->next; -- 10(head)->20(temp)->30(tail)->NUll
//         }
//         Temp->next = NULL; -- 10(head)->20(temp)->NUll
//          tail = Temp; -- 10(head)->20(tail)->NUll
//-----------------------------------
//
// ---------------------------------------------------------



#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{ //user defined datatype
public:
    int val;
    Node* next; 

    //creating a constructor
    Node(int val){
        this->val = val;
        this->next = NULL; //har baar jab node bane to uke next pe NUlL pre defined ho
    }
    
};

class LinkedList{//user defined data structure
public:
    Node* head ;
    Node* tail ;
    int size;
    LinkedList(){
        this->head = NULL;
        this->tail = NULL;
        size = 0;
    }

    void insertAtEnd(int val){

        Node* temp = new Node(val);

        if(size == 0){
            head = tail = temp;
        }

        else{
            tail->next = temp;
            tail = temp;
        }

        size++;

    }

     void insertAtHead(int val){

        Node* temp = new Node(val);

        if(size == 0){
            head = tail = temp;
        }

        else{
            temp->next = head;
            head = temp;
        }

        size++;

    }

    void insertAtIdx(int idx , int val){

        if(idx < 0 || idx > size){
            cout<<"invalid index"<<endl;
           
        }

        else if(idx == 0){
            insertAtHead(val);
           
        }

        else if(idx == size){
            insertAtTail(val);
           
        }

        else{
            Node* t = new Node(val);
            Node* Temp = head;
            for(int i =1;i<=idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }

    }

     void getAtIdx(int idx , int val){

        if(idx < 0 || idx > size){
            cout<<"invalid index"<<endl;
            return -1;  
           
        }

        else if(idx == 0){
            return head->val;
           
        }

        else if(idx == size){
            return tail->val;
           
        }

        else{
            Node* temp = new Node(val);
            
            for(int i =1;i<=idx;i++){
                temp = temp->next;
            }
            return temp->val;

        }

    }

    void deleteAtHead(){
        if(size==0){
            cout<<"List is empty";
            return;
        };
        head = head->next;
        size--;
    }

    void deleteAtTail(){
        if(size==0){
            cout<<"List is empty";
            return;
        };
        Node* Temp = head;
        while(Temp->next!=tail){
            Temp = Temp->next;
        }
        Temp->next = NULL;
        tail = Temp;
        size--;
    }

    void deleteAtIndex(ind idx){
        if(size==0){
            cout<<"List is empty";
            return;
        };
        else if(idx<0 && idx>=size){
            cout<<"Invalid Index";
            return;
        }
        else if(idx==0) return deleteAtHead();
        else if(idx==size-1) return deleteAtTail();
        else{
            Node* Temp = head;
            for(int i =1;i<=idx-1;i++){
                Temp = Temp->next;
            }
            Temp->next = Temp->next->next;
            size--;
        }
    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }

    }



};





int main()
{
    LinkedList ll ;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtHead(80);
    ll.display();
}


   
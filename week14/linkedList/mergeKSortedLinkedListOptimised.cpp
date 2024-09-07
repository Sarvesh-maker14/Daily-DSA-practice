// problem with current method 

// tno =  1,2,3,4,5,6,7,8 (k = 8)--> n*(k)*(k+1)/2 -n => 35n


// New Approach

// 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8
// |---|   |---|   |---|   |---|
//   2n      2n      2n      2n    --> 8n
//   |-------|        |-------|    --> 8n
//       4n              4n
//       |----------------|        --> 8n
//               8n               -------------
//                                     24n
//                                 ------------

// Algo 

// {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8} --> vector
//  |---|                         ^
//  merge------------------------>|

// {3 , 4 , 5 , 6 , 7 , 8 , {1,2}}
//  |---|                         ^
//  merge------------------------>|

//  {5, 6 , 7 , 8 , {1,2},{3,4}}
//  |---|                      ^
//  merge--------------------->|

// {7 , 8 , {1,2},{3,4}{5,6}}
//  |---|                   ^
//  merge------------------>|

//  {{1,2},{3,4}{5,6},{7,8}}
//  |---------|           ^
//  merge---------------->|


//  {{5,6},{7,8}{{1,2},{3,4}}}
//  |---------|           ^
//  merge---------------->|
 

//   {{{1,2},{3,4}}{{5,6},{7,8}}}
//     |-----------merge   ----|   

// {{{{1,2},{3,4}}{{5,6},{7,8}}}}        


// [
//   1->4->5, --> a
//   1->3->4, --> b
//   2->6 --> c
// ] --> vector
// a)pop back last two list b and c
// b)mergeSortList(b,c) --> push back (b,c)
// [
//         1->4->5 --> a 
//         1->2->3->4->6 --> b,c
// ]
// c)mergeSortList(a,(b,c)) --> push back (a,b,c)
// [
//         1->1->2->3->4->4->5->6 --> a,b,c
// ]




// merging them into one sorted list:
// 1->1->2->3->4->4->5->6


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

// TC 

// 1 , 2 , 3 , 4 , 5 ,6,7,8   k=8

// TC = n*k*(k+1)/2 - n = 35n



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


Node* mergeKLists(vector<Node*>& arr){
    if(arr.size()==0){
        return NULL;
    }

    while(arr.size()>1){
        Node* a = arr[0];
        arr.erase(arr.begin()); // pop front --> only change
        Node* b = arr[0];
        arr.erase(arr.begin()); // pop front

        Node* c = mergeSortList(a,b);
        arr.push_back(c);
    }
    return arr[0];
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
    // display(mergeSortList(headA,headB));

     vector<Node*> lists = { headA, headB };
    Node* mergedList = mergeKLists(lists);
    display(mergedList);
   
    // cout<<size(a);

}


   























   
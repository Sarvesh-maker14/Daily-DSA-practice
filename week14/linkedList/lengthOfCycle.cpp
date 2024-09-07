// s--> slow pointer (head)
// f--> fast pointer (head->next)

// 10->20->30->40->50->60->70
//          ^               |
//          |_______________|

// s   f
// 10->20->30->40->50->60->70
//          ^               |
//          |_______________|

//      s      f
// 10->20->30->40->50->60->70
//          ^               |
//          |_______________|

//          s          f
// 10->20->30->40->50->60->70
//          ^               |
//          |_______________|

//          f   s          
// 10->20->30->40->50->60->70
//          ^               |
//          |_______________|

//                (fs)          slow = fast --> linked list is cyclic
// 10->20->30->40->50->60->70
//          ^               |
//          |_______________|




//-------------------------------------------------------------------------------
// to find the length of the linked list


//                (fs)         
// 10->20->30->40->50->60->70   count = 0;
//          ^               |
//          |_______________|

// s = s->next jab tak f == s

//                 f   s         
// 10->20->30->40->50->60->70  count = 1;
//          ^               |
//          |_______________|



//                 f       s         
// 10->20->30->40->50->60->70  count = 2;
//          ^               |
//          |_______________|


//          s       f                
// 10->20->30->40->50->60->70  count = 3;
//          ^               |
//          |_______________|


//              s   f                
// 10->20->30->40->50->60->70  count = 4;
//          ^               |
//          |_______________|

//                 sf                
// 10->20->30->40->50->60->70  count = 5;
//          ^               |
//          |_______________|

// while(s!=f){
//     s=s->next;
//     count++;
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node { 
public:
    int val;
    Node* next; 

    // Creating a constructor
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void display(Node* head) {
    if(head == NULL) return;
    cout << head->val << " ";
    display(head->next);
    cout << endl;
}

int size(Node* head) {
    Node* temp = head;
    int count = 0;
    while(temp != NULL) {
        temp = temp->next;
        count++;
    }
    return count;
}

void addCycle(Node* head, int idx) {
    Node* temp = head;

    idx--;
    while(idx--) {
        temp = temp->next;
    }

    temp->next->next = head->next;
}

int findLengthOfCycle(Node* head) {
    Node* fast = head->next;
    Node* slow = head;
    int flag = 0;
    while(fast && fast->next) {
        if(fast == slow) {
            flag = 1;
            break;
        }
        fast = fast->next->next;
        slow = slow->next;
    }

    if(flag == 0) return 0;
    int cnt = 1;
    slow = slow->next;
    while(slow != fast) {
        cnt++;
        slow = slow->next;
    }

    return cnt;
}

int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    Node* head = a;
  
    addCycle(head, 4);
    cout << findLengthOfCycle(head) << endl;

    return 0;
}

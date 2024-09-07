

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

vector<vector<int>> spiralMatrix(int m,int n,Node* head) {
        vector<vector<int>> arr(m, vector<int> (n,-1));
        int minr = 0, minc = 0;
    int maxr = m-1,maxc = n-1;
    int index = 1;

    Node* temp = head;

    while(minr<=maxr && minc<=maxc){
        //right 
        for(int j=minc;j<=maxc;j++){
            if(temp==NULL) return arr;
            arr[minr][j] = temp->val;
            temp = temp->next;
        }
        minr++;

       

        //down
        for(int i=minr;i<=maxr;i++){
            if(temp==NULL) return arr;
            arr[i][maxc] = temp->val;
            temp = temp->next;
        }
        maxc--;

       

         for(int j=maxc;j>=minc;j--){
            if(temp==NULL) return arr;
            arr[maxr][j] = temp->val;
            temp = temp->next;
        }
        maxr--;


        
        for(int i=maxr;i>=minr;i--){
            if(temp==NULL) return arr;
            arr[i][minc] = temp->val;
            temp = temp->next;
        }
        minc++;


    }

    return arr;


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
  
   
    // cout<<size(a);
     cout << "Spiral Matrix: " << endl;
    vector<vector<int>> result = spiralMatrix(2, 3, head);
    for (const auto& row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

}


   
























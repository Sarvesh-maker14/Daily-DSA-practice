#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Student{ 
public:
    string name;
    int rno;
    float marks;

    // constructor
    Student(string name.int rno,float marks){
        this->name = name; //this is pointer
        (*this).rno = rno;
        this->marks = marks;
    }

};


int main()
{
    // int x;
    Student s("sarvesh",72,92.6);

    // Student* s = new Student("Raghav",76,92.6); //dynamic allocation

    s.marks = 99;
    s.name = "sarvesh";
    s.marks = 92.6;

    int x = 6;
    int* p = &x; // p me x ka address store kar rahe hai
    cout<<(*p); // de-reference operator

    // (*ptr). === ptr->


}


   
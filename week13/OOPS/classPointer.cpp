#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Pokemon{ 
public:
   string type;
   int attack;

  //  Pokemon(string type,int attack){
  //    this->type = type;
  //    this->attack = attack;
  //  }
};

// void change(Pokemon &pikachu){ //pass by value ho raha hai --> & laga do pass by reference
//   pikachu.attack = 100;
//   pikachu.type = "dragon";
// }

//using pointers
void change(Pokemon* ptr){ //taking the address 
  (*ptr).attack = 100; //(*ptr) taking value
  (*ptr).type = "dragon";
}

//(*ptr) === ptr->

// void change(Pokemon* ptr){ //taking the address assigning to a pointer
//   ptr->attack = 100; //we can also use
//    ptr->type = "dragon";
// }



int main()
{
  Pokemon pikachu;
  pikachu.type = "electric";
  pikachu.attack = 80;
  // change(pikachu);
   change(&pikachu); //using address --> using pointers
  cout<<pikachu.type<<" "<<pikachu.attack<<endl;

  Pokemon charizard;
  charizard.type = "fire";
  charizard.attack = 120;

  cout<<charizard.type<<" "<<charizard.attack<<endl;
   }


   
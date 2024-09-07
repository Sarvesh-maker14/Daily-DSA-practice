#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Pokemon{ 
private: //abstraction
   int attack;
public:
    string type;
    void set(int val){
        attack = val;
    }
    int get(){
        return attack;
    }
};


int main()
{
  Pokemon pikachu;
  pikachu.type = "electric";
//   pikachu.attack = 80;
pikachu.set(70);

  cout<<pikachu.get()<<endl;

//   Pokemon charizard;
//   charizard.type = "fire";
//   charizard.attack = 120;

//   cout<<charizard.type<<" "<<charizard.attack<<endl;
   }


   
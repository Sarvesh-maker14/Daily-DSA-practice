#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// root n tak jaa rahe kyu ki wo re-iteration se bachna hai



void fillSieve(vector<bool>& sieve){
    int n = sieve.size() -1;
    for(int i = 2;i<=sqrt(n);i++){ 
        for(int j = 2*i;j<=n;j = j+i){
            sieve[j] = 0;
        }
    }
}



int countPrime(int n){

    if(n<=2) return 0;

    n = n -1;

    int count = 0;
    vector<bool> sieve(n+1,1); // 1 matlab prime

    sieve[0] == 0;
    sieve[1] == 0;

    fillSieve(sieve);


    //counting primes in the vector
    for(int i =2;i<=n;i++){
        if(sieve[i] == 1) count++;
    }

    return count;
}


int main()
{
    cout<<countPrime(10);

}
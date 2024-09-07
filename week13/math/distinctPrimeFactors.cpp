#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void fillSieve(vector<bool>& sieve){
    int n = sieve.size() - 1;
    for(int i = 2; i * i <= n; i++){ 
        if(sieve[i]){
            for(int j = i * i; j <= n; j += i){
                sieve[j] = false;
            }
        }
    }
}

int distinctPrimeFactors(vector<int>& nums){
    int n = nums.size();
    int mx = -1;
    for(int i = 0; i < n; i++){
        mx = max(mx, nums[i]);
    }

    vector<bool> sieve(mx + 1, true);
    if(n > 0) sieve[0] = false;
    if(n > 1) sieve[1] = false;

    fillSieve(sieve);

    vector<int> primes;

    for(int i = 2; i <= mx; i++){
        if(sieve[i]){
            primes.push_back(i);
        }
    }

    vector<bool> taken(primes.size(), false);
    
    for(int i = 0; i < nums.size(); i++){
        int ele = nums[i];
        for(int j = 0; j < primes.size(); j++){
            if(primes[j] > ele) break;
            if(ele % primes[j] == 0) taken[j] = true;
        }
    }

    int count = 0;
    for(int i = 0; i < taken.size(); i++){
        if(taken[i]) count++;
    }

    return count;
}

int main()
{
    vector<int> numbers = {10, 12, 15};
    cout << distinctPrimeFactors(numbers) << endl;

    return 0;
}

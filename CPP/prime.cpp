#include<bits/stdc++.h>
#define maxn 100

using namespace std;

bool isPrime[maxn+1]; /// initially all are indicates false

vector <int> primes;
void sieve(){
    /// step delete all even number without 2
    for (int i = 4; i <= maxn; i+=2){
        isPrime[i] = true; /// true means delete from array
    }
    primes.push_back(2);
    
    for (int i = 3; i <= maxn; i+=2){
        if(isPrime[i] == false){
            /// prime number
            primes.push_back(i);
            // step delete all odd multiple number
            for (int j=i*i; j <= maxn; j+=i){
                isPrime[j] = true;
            }
        }
    }
}

int main(){
    sieve();
    for (int i = 0; i < primes.size(); i++){
        cout << primes[i] << " ";
    }
    return 0;
}

/* 
step 1: delete all even number without 2
step 2: push on vector unmarked value as prime
step 3: delete all multiples of pushed value
*/
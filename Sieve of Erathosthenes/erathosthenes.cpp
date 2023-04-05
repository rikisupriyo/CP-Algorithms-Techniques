#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    bool isPrime[n];
    isPrime[1] = false;
    for (int i=2; i<=n; i++) {isPrime[i] = true;}

    //algo for sieve of erathosthenes, Time Complexity = O(nlogn)

    for (int i=2; i<=n/2; i++) {
        if (isPrime[i]) {
            for (int j = i*2; j <= n; j += i)
                isPrime[j] = false;
        }
    }

    for (int i=1; i<=n; i++) {cout<<isPrime[i]<<" ";}
    
    return 0;
}
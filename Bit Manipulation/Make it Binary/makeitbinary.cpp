#include <bits/stdc++.h>
using namespace std;

int toBinary(int n) {
    int ans=0, p=1;

    while(n) {
        int lastBit = n&1;
        ans += p*lastBit;
        p *= 10;
        n >>= 1;
    }
    return ans;
}

int main() {
    int n;
    cin>>n;

    cout<<toBinary(n);

    return 0;
}
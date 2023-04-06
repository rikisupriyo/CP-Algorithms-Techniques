#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n) {
    int ans=0;
    while(n) {
        n &= (n-1);
        ans++;
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    cout<<countSetBits(n);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int clearBit(int n, int i) {
    int mask = ~(1<<i);
    return n&mask;
}

int main() {
    int n,i;
    cin>>n>>i;

    cout<<clearBit(n, i);

    return 0;
}
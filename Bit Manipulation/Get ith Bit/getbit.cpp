#include <bits/stdc++.h>
using namespace std;

int getBit(int n, int i) {
    int mask = 1<<i;
    return (n&mask)>0?1:0;  
}

int main() {
    int n, i;
    cin>>n>>i;

    cout<<getBit(n, i);

    return 0;
}
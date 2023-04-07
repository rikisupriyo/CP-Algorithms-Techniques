#include <bits/stdc++.h>
using namespace std;

int setBit(int n, int i) {
    int mask = 1<<i;    
    return n|mask;
}

int main() {
    int n, i;
    cin>>n>>i;

    cout<<setBit(n, i);

    return 0;
}
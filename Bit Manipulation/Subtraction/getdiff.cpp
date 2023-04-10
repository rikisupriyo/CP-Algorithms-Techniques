#include <bits/stdc++.h>
using namespace std;

int getDiff(int a, int b) {
    return b?getDiff(a^b, ((~a)&b)<<1):a;
}

int main() {
    int a, b;
    cin>>a>>b;

    cout<<getDiff(a, b);
    return 0;
}
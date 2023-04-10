#include <bits/stdc++.h>
using namespace std;

int getSum(int a, int b) {
    return b?getSum(a^b, (a&b)<<1):a;
}

int main() {
    int a, b;
    cin>>a>>b;

    cout<<getSum(a, b);
    return 0;
}
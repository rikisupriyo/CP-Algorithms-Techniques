#include <bits/stdc++.h>
using namespace std;

int gcdEuclid(int a, int b) {
    if (b==0)
        return a;
    return gcdEuclid(b, a%b);
}

int main() {
    int a,b;
    cin>>a>>b;

    cout<<gcdEuclid(max(a,b), min(a,b));
    return 0;
}

// Time Complexity = O(log(max(a,b)))
#include <bits/stdc++.h>
using namespace std;
#define SQ(a) (a)*(a)

int fastMod(int a, int b, int c) {
    if (b == 0)
        return 1;
    // (a^b)%c = (SQ(a) % c)^(b/2) if even
    if (b%2 == 0) 
        return fastMod(SQ(a) % c, b/2, c);
    // (a^b)%c = (a * a^(b-1)) % c if odd
    return (a * fastMod(a, b-1, c)) % c;
}


int main() {

    return 0;
}
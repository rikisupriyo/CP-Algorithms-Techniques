// find max subarray sum
//Time Complexity = O(n)

#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define REP(i,a,b) for (int i=a; i<=b; i++)

int main() {
    int v[] = {-1, 2, 4, -3, 5, 2, -5, 2};
    int best=0, sum=0;

    REP(i, 0, 7) {
        sum = max(v[i], sum + v[i]);
        best = max(sum, best);
    }

    cout << best << endl;

    return 0;
}
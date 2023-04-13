#include <bits/stdc++.h>
using namespace std;

vector<int> extendedGCD(int a, int b) {
    if (b==0) return {1, 0, a};
    vector<int> res = extendedGCD(b, a%b);
    return {res[1], res[0] - (a/b)*res[1], res[2]};
}

int MMI(int a, int m) {
    vector<int> res = extendedGCD(a, m);
    return (res[2] != 1)?-1:(res[0]%m + m)%m; //to make the number positive and within range 1-n
}

int main() {
    int a, m;
    cin>>a>>m;

    cout<<MMI(a, m);
    return 0;
}
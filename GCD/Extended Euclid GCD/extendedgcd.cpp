#include <bits/stdc++.h>
using namespace std;

//ax+by = gcd(a,b), x=?, y=?

vector<int> extendedGCD(int a, int b) {
    //base case
    if (b==0) return {1,0,a};
    
    vector<int> result = extendedGCD(b, a%b);
    int X = result[0];
    int Y = result[1];
    int gcd = result[2];

    int x = Y;
    int y = X - (a/b)*Y;

    return {x, y, gcd};
}

int main() {
    int a, b;
    cin>>a>>b;

    vector<int> ans = extendedGCD(a, b);

    cout<<"X = "<<ans[0]<<", Y = "<<ans[1]<< ", GCD = "<<ans[2];
    return 0;
}
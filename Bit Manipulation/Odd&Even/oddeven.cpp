#include <bits/stdc++.h>
using namespace std;

bool oddeven(int n) {
    return (n&1)?true:false;
}

int main() {
    int n;
    cin>>n;

    oddeven(n)?cout<<"Odd":cout<<"Even";
    return 0;
}
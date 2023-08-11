/*
Website: Codeforces
Link: https://codeforces.com/problemset/problem/486/A
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

auto solve(ll x){
    if (x & 1){
        return -((x+1)/2);
    }else{
        return x/2;
    }
}

int main(){

    ll x;
    cin >> x;
    cout << solve(x) << "\n"; 

    return 0;
}
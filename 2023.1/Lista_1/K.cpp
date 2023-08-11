/*
Website: AtCoder
Link: https://atcoder.jp/contests/abc043/tasks/abc043_b
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define all(x) x.begin(), x.end()
#define vin(vt) for (auto &e : vt) cin >> e
#define LSOne(S) ((S) & -(S))

auto solve(){
    string x;
    cin >> x;
    stack <char> a;
    for(int i=0;i<=x.length();i++){
        if((int)x[i] == 48){
            a.push(48);
        }else if((int)x[i] == 49){
            a.push(49);
        }else if((int)x[i] == 66){
            if(!a.empty())a.pop();
        }
    }
    int ku = a.size();
    char j[ku];
    for(int p=0;p<ku;p++){
        j[p] = a.top();
        a.pop();
        }
    while(ku!=0){
        cout << j[ku-1];
        ku--;
    }
}

int main(){

    solve();

    return 0;
}
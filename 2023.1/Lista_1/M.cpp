#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define all(x) x.begin(), x.end()
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
#define vin(vt) for (auto &e : vt) cin >> e
#define LSOne(S) ((S) & -(S))


auto solve(){
    ll x,y;
    cin >> x >> y;
    cout << (x+y-1)/x;
}

int main(){
    fastInp;
    solve();

    return 0;
}
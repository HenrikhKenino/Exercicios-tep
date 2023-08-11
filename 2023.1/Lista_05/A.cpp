/*
Website: AtCoder
Link: https://atcoder.jp/contests/arc062/tasks/arc062_a?lang=en
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define TEST(a,i) ((a) & (1<<(i)))
#define SET(a,i) ((a) | (1<<(i)))
#define CLEAR(a,i) ((a) & ~(1<<(i)))
#define FLIP(a,i) ((a) ^ (1<<(i))) 

#define all(x) x.begin(), x.end()
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
#define vin(vt) for (auto &e : vt) cin >> e
#define LSOne(S) ((S) & -(S))
#define teto(a, b) (a + b - 1)/ b

void solve(){
    int t;
    cin >> t;
	ll ans = 1;
	ll a=1, b=1; 
	while(t--){
		ll x, y; cin >> x >> y;
		ll fac = max(teto(a,x), teto(b,y));
		a = x * fac;
		b = y * fac;
	}
	cout << a + b << endl;
}
int main(){
    fastInp;
    solve();

    return 0;
}
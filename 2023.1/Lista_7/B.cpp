/*
Website: AtCoder
Link: https://atcoder.jp/contests/abc172/tasks/abc172_d?lang=en
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

const int m = 1e7+1;
ll c[m]={0};

void solve(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++) for(int j=i; j<=n; j+=i) c[j]++;
    ll ans = 0;
    for(int i=0;i<=n;i++) ans+=i*c[i];
    cout << ans << endl;
}

int main(){
    fastInp;
    solve();

    return 0;
}
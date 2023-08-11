/*
Website: AtCoder
Link: https://atcoder.jp/contests/abc096/tasks/abc096_d?lang=en
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

#define n 55555
void SieveOfEratosthenes(int x)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    int k=0;
  
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 3; p <= n; p+=10)
        if (prime[p]){
            cout << p;
            k++;
            if(k==x)break;
            cout << " ";
        }
    cout << "\n";
}

void solve(){
    int x;
    cin >> x;
    SieveOfEratosthenes(x);
}

int main(){
    fastInp;
    solve();

    return 0;
}
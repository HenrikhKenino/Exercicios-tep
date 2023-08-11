/*
Website: UVA
Link: https://vjudge.net/problem/UVA-10699
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

#define n 1000000
bool prime[1000001];
void SieveOfEratosthenes()
{
    memset(prime, true, sizeof(prime));
    int z=0;
	for (int p = 2; p * p <= n; p++) {
		if (prime[p] == true) {
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}
} 

void solve(){
    int x,k=0;
    cin >> x;
    SieveOfEratosthenes();
    while(true){
        k=0;
        for(int i=2;i<=x;i++){
            if(prime[i]){
                if(prime[i]>=x) break;
                if(x%i==0) k++;
            }
        }
        if(x==0) break;
        cout << x << " : " << k << "\n";
        cin >> x;

    }
    
}
int main(){
    fastInp;
    solve();
    return 0;
}
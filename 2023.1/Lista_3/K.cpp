//Passei esta e dava erro mas n descobri o erro:

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

void solve(){
    ll x=0;
    int r;
    while(x>=0){
        cin >> x;
        stack<int> p;
        if(x==0)cout << 0;
        while(x>=1){
            r = x%3;
            x/=3;
            p.push(r);
        }
        while(p.empty()!=true){
            cout<<p.top();
            p.pop();
        }
        if(x>=0)cout << "\n";
    }
}
 
int main(){
    fastInp;
    solve();

    return 0;
}

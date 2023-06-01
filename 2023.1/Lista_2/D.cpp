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
    int x,y;
    while(cin >> x >> y and not cin.eof()){
        int z = x;
        while(x>=y){
            z += x/y;
            x = (x/y) + (x%y);  
        }
        cout << z << "\n";
    }
}
int main(){
    fastInp;
    solve();

    return 0;
}

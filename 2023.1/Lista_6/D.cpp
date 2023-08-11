/*
Website: Codeforces
Link: https://codeforces.com/problemset/problem/236/B
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

#define m 1000010
int sum[m]={0};
void solve(){
    
    for(int i=1; i<=m;i++){
        for(int j=i;j<=m;j+=i){
            sum[j]++;
        }
    }
    int a,b,c,z=0;
    cin >> a >> b >> c;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            for(int k=1;k<=c;k++){
                z = (z+sum[i*j*k]) % 1073741824;        
            }
        }
    }
    cout << z << endl;
}

int main(){
    fastInp;
    solve();

    return 0;
}
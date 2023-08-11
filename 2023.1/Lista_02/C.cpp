/*
Website: Online Judge
Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3666
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

void solve(){
    int x,y,z,h;
    cin >> x;
    for(int j=0;j<x;j++){
        int v[] = {0,0,0,0,0,0,0,0,0,0};
        cin >> y;
        for(int i=1;i<=y;i++){
            z = i;
            while(z!=0){
                h = z%10;
                z = z/10;
                v[h]++;
            }
        }
        for(int a=0; a<10;a++) {
            if(a<9)cout << v[a] << " ";
            else cout << v[a] << endl;
        }
    }
    
}
 
int main(){
    fastInp;
    solve();

    return 0;
}

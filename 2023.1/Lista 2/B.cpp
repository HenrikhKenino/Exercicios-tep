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

int f(list <int> p,int x){
    int j=0;
    for(int i : p){
            for(int j : p){
                    for(int k : p){
                        if((pow(i,2))*j*(pow(k,2))==x)j++;
            }
        }
    }
    return j;
}

auto solve(){

    int x;
    cin >> x;
    int ans=0;
    int j = sqrt(x);
    list <int> p;
    for(int i=2;i<j;x++){
        for(int j=2;j<i;j++)if(i%j==0)ans++;
        if(ans==0) p.push_back(ans);
    }
    cout << f(p,x) << '\n';
}
 
int main(){
    fastInp;
    solve();

    return 0;
}

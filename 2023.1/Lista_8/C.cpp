/*
Website: Codeforces
Link: https://codeforces.com/problemset/problem/200/B
*/

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);

int main(){
    fastInp;

    double x,z=0;
    cin >> x;
    for(double i = 0; i < x; i++){
        double n;
        cin >> n;
        z += n;
    }

    cout << fixed << setprecision(12) << z/x << endl;
    

    return 0;
}

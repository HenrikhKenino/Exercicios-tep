/*
Website: AtCoder
Link: https://atcoder.jp/contests/abc148/tasks/abc148_a
*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a,b;
    cin >> a >> b;
    if((a==1 && b==2) || (a==2 && b==1)){
        cout << 3 << endl;
    } else if((a==1 && b==3) || (a==3 && b==1)){
        cout << 2 << endl; 
    }else{cout << 1 << endl;}

    return 0;
}
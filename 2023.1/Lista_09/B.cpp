/*
Website: UVA
Link: https://vjudge.net/problem/UVA-374
*/

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);

long long modobiggg(ll a, ll n, ll c) {
    if(n==1) return a;      
    if(n==0) return 1;     
    if(n%2){
        auto x = a%c;
        auto z = modobiggg(a,n-1,c); 
        return(x*z)%c;
    }else{
        auto x = modobiggg(a, n/2,c);
        return (x*x)%c;
    }
}      

int main(){
    fastInp;
    
    ll a,b,c;
    while(cin>>a>>b>>c){
        cout<< modobiggg(a,b,c) <<endl;
    }


    return 0;
}

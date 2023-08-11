/*
Website: AtCoder
Link: https://atcoder.jp/contests/abc097/tasks/abc097_a
*/

#include <bits/stdc++.h>

using namespace std;        

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c,d,z,y,h;
    cin >> a >> b >> c >> d; 
    if(a >= b){
        z = a-b;
    }else{
        z = b-a;
    }
    if(c >= b){
        y = c-b;
    }else{
        y = b-c;}
    if(a>=c){
        h = a-c;
    }else{
        h = c-a;
    }
    if (z<=d && y<=d){
        cout << "Yes" << endl;
    }else if(h<=d){
        cout << "Yes" << endl;
    }else{cout << "No" << endl;}


    return 0;
}
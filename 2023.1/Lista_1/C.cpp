#include <bits/stdc++.h>

using namespace std;

// Aqui simula um exame q tem 3 alternativas, ele vai me dar no input duas q estao erradas e tenho q printar a terceira q e a certa
    // input: 3
    //        1
        //output: 2

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
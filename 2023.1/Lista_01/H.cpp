/*
Website: Codeforces
Link: https://codeforces.com/problemset/problem/236/A
*/

#include <bits/stdc++.h>

using namespace std;

bool v(string k[], string p, int g){
    for(int c=0; c<g;c++){
        if (k[c] == p){
            return false;
        }
    }
    return true;
}

int main(){

    string a;
    cin >> a;
    int z = a.length();
    string l[z];
    l[0] = "10";
    string *pl=l;
    int ans;

    for(int i=0; i<z;i++){
        for(int j=0; j<z;j++){
            string p(1,a.at(i));
            if(a.at(i)!=a.at(j)){
                if (l[0]=="10"){
                    l[0] = a.at(i);
                    ans++;
                }else if(v(l,p,ans)==true){
                    l[ans] = a.at(i);
                    ans++;
                }
            }
        }
    }

    if((ans%2)!=0 || ans==0){
        cout << "IGNORE HIM!" << endl;
    }else{
        cout << "CHAT WITH HER!" << endl;
    }


    return 0;
}
/*
Website: Kattis
Link: https://open.kattis.com/problems/cd
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int x,y,p;
    while(cin >> x >> y && (x!=0 || y!=0)){       
        set<int>j;                 
        for(int i=0;i<(x+y);i++){       
            cin >> p;
            j.insert(p);
        }
        cout << (x+y)-j.size() << "\n";        
    }


    return 0;
}
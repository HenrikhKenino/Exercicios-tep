#include <bits/stdc++.h>
using namespace std;

bool prime[1000001];
void SieveOfEratosthenes(int n)
{
    memset(prime, true, sizeof(prime));
	for (int p = 2; p * p <= n; p++) {
		if (prime[p] == true) {
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}
}

int main()
{
    
	int n = 1000000;
	SieveOfEratosthenes(n);
    vector<int> cu;
	for (int p = 2; p <= n; p++) if (prime[p])cu.push_back(p);
    while(true){
        int x,bui=1,mn=2;
        cin >> x;
        if(x==0) break;
        auto it = lower_bound(cu.begin(),cu.end(), x);   
        int a = *cu.begin();
        int b = cu[it-cu.begin()-1];
        while(a+b!=x){
            if((b+a)>x) {
                b=cu[it-cu.begin()-mn];
                mn ++;
            }else{
            a=cu[bui];
            bui ++;
            }
        }
        cout << x << " = " << a << " + " << b << "\n";
    }
        return 0;
}
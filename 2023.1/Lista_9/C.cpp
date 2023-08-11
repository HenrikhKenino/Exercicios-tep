/*
Website: UVA
Link: https://vjudge.net/problem/UVA-11029
*/

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);

long long fast_exp(ll a, ll n) {
    if(n==1) return a;      //caso um numero esteja elevado a 1 seu exponcial é o proprio numero
    if(n==0) return 1;      //caso um numero esteja elevado a zero seu exponencial é 1
    auto x = fast_exp(a, n/2)%1000;     //aqui uso uma recursão de função, onde vou diminuindo o intervalo da exponenciação já que a^n = a^n/2 * a^n/2  ^ n%2==0 já a^n = a^n/2 * a^n/2 * a  ^ a%2!=0 
    return x*x* (n%2?a : 1)%1000;   //Aqui faço a multiplicação do x das recurções, e aplico o q expliquei na linha anterior, caso n seja impar multiplico-o por a
}       //neste caso fui pegando o resto da divisão por 1000 pq quero apenas os 3 primeiros numeros da exponenciação

int main(){
    fastInp;
    
    ll x, a, n;
    cin >> x;
    for(int i=0;i<x;i++){
        cin >> a >> n;
        cout << int(pow(10,((n*(log(a)/log(10))-((int)(n*(log(a)/log(10)))))))*100) << "..." << setfill('0') << setw(3) << fast_exp(a,n) << "\n";
    }       // no primeiro cout calculo os tres primeiros numeros de uma exponenciação pela regra do ln().   Já no segunto faço setfill e setw para preencher com zeros à frente do numero dado pela função fast_exp() caso o numero retornado tenha menos que 3 digitos.
    

    return 0;
}

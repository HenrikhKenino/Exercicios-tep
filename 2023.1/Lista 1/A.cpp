#include <bits/stdc++.h>

using namespace std;        

//Neste exercicio eu tinha que ver se tres pessoas a,b,c se conseguiriam comunicar sendo que d era distancia maxima que elas
    //poderiam falar uma com as outras, tinha que printar se a e c se conseguiriam conectar direta ou indiretamente
        //diretamente, seria por d e indiretamente seria passando a resposta para b e depois para c ou a
            //Ex input: 4 7 9 3
                // output: Yes

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
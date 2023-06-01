#include <bits/stdc++.h>

// Neste exercicio recebia dois inteiros n e m separados por espacos q determinavam a quantidade de itens q seriam chamados abaixo e tais itens parariam de ser colocados qnd aparecese 0 0 no input
    //Desses itens abaixo eu deveria ver nos n e nos m quais valores estavam iguais e printar essa quantidade
        //input : 3 3 
                //1
                //2
                //3
                //1
                //2
                //4
                //0 0
                        //output : 2

using namespace std;

typedef long long ll;

int main(){
    int x,y,p;
    while(cin >> x >> y && (x!=0 || y!=0)){         //Enquanto recebo dois valores e um ou outro deles e diferente de -
        set<int>j;                  //criando um se em c++
        for(int i=0;i<(x+y);i++){       //fazendo um for q insere os elementos do input em um set
            cin >> p;
            j.insert(p);
        }
        cout << (x+y)-j.size() << "\n";         //printando a quantidade de elementos do input menos o tamanho do set, mesma ideia da G.cpp
    }


    return 0;
}
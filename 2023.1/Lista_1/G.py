#Neste exercicio eu recebo 4 inteiros e tenho q printar se tenho repetidos quantas vezes se repetem
    # input: 7 3 3 2        
        #output: 1          ->o 3 se repete uma vez, e so ele se repete
x = set(map(int, input().split()))          #Aqui recebo o input do terminal e transformo em int cada um bem como coloco os valores recebidos dentro de um set
print(4-len(x))                    #aqui printo os valores q tenho no set subtraidos do valor total de elementos recebidos, ja que o set n guarda elementos repetidos
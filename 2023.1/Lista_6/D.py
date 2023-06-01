def next_prime(a):
    if a <= 2:
        return 2
    if a % 2 == 0:
        a += 1
    primes = [True] * (2 * a)
    # Utiliza o Crivo de Eratóstenes para marcar os números compostos
    p = 3
    while p * p <= 2 * a:
        if primes[p]:
            for i in range(p * p, 2 * a, 2 * p):
                primes[i] = False
        p += 2
    # Encontra o próximo número primo após "a"
    for num in range(a, 2 * a, 2):
        if primes[num]:
            return num
a = int(input())
next_prime_num = next_prime(a)
print(next_prime_num)

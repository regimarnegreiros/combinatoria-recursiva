**Combinatória Utilizando as Propriedades do Binômio de Newton**

Este programa em C calcula os coeficientes binomiais (também conhecidos como números binomiais) utilizando a recursão e as propriedades do Binômio de Newton. Os coeficientes binomiais representam o número de maneiras de escolher \( p \) elementos distintos de um conjunto de \( n \) elementos, denotado por C(n, p).

### Propriedades do Binômio de Newton Utilizadas:

1. **C(n, 0) = C(n, n) = 1**: O número de maneiras de escolher \( 0 \) elementos de \( n \) elementos ou o número de maneiras de escolher todos os \( n \) elementos é sempre \( 1 \).
2. **C(n, 1) = C(n, n-1) = n**: O número de maneiras de escolher \( 1 \) elemento de \( n \) elementos ou o número de maneiras de escolher \( n-1 \) elementos de \( n \) elementos é igual a \( n \).
3. **C(n, p) = C(n-1, p-1) + C(n-1, p)**: O coeficiente binomial C(n, p) pode ser calculado recursivamente somando o coeficiente binomial C(n-1, p-1) com o coeficiente binomial C(n-1, p).

### Funcionamento do Programa:

O programa define uma função `combinacao` que calcula os coeficientes binomiais de forma recursiva usando as propriedades do Binômio de Newton.

A função `main` gera uma saída de dados em forma triangular, onde cada linha representa os coeficientes binomiais correspondentes a um valor de \( n \).

Exemplo de saída para \(qlinhas = 10\):

```
  1 
  1   1 
  1   2   1 
  1   3   3   1 
  1   4   6   4   1 
  1   5  10  10   5   1 
  1   6  15  20  15   6   1 
  1   7  21  35  35  21   7   1 
  1   8  28  56  70  56  28   8   1 
  1   9  36  84 126 126  84  36   9   1 
```
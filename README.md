# SD-Coding1

Lista de programação de Sistemas Digitais

- Entrega: **23:59 - 18/06/2018**
- Avaliação: 3 pontos da terceira unidade
  - 2 pontos: Validação do código via testes automáticos
  - 1 ponto: Qualidade da solução e do código (otimização, legibilidade, padronização, clareza, etc).
- Submissão: mais detalhes em breve!

---

## 1. _FizzBuzz_

_FizzBuzz_ é um jogo popular nos EUA para ensinar divisão a crianças. Nele, os jogadores contam incrementalmente, substituindo os números divisíveis por 3 por "Fizz" e os divisíveis por 5 por "Buzz". Números divisíveis por 3 e 5 ao mesmo tempo devem ser substituídos por "FizzBuzz".

> Exemplo: 1, 2, Fizz, 4, Buzz, Fizz, 7, 8, Fizz, Buzz, 11, Fizz, 13, 14, FizzBuzz, 16, ...

Implemente a função _FizzBuzz_ conforme definida abaixo. A mesma deve receber dois números inteiros não negativos (start e end) e imprimir a partir de start (incluído) até end (excluído) seguindo a mesma lógica do FizzBuzz.

- **Função:** void fizzBuzz(int start, int end)
- **Input:** inteiros (start < end) determinando os números de início e fim da contagem.
- **Output:** utilize a função _printf_ da biblioteca _stdio.h_ e escreva um número ou palavra por linha:

```
fizzBuzz(1, 16)
Output:
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
```

## 2. Palíndromo

Palíndromos são palavras ou frases que são lidas da mesma forma tanto da esquerda para a direita quanto da direita para a esquerda.

> Exemplos: ovo, arara, ana, apos a sopa, reviver...

Escreva uma função que analisa uma dada palavra ou frase, retornando se a mesma é um palíndromo ou não.

- **Função:** bool isPalindrome (char[] sentence, int length)
- **Input:**
  - sentence: array de caracteres em minúsculo da palavra ou frase a ser analisada.
  - length: tamanho do array - número de caracteres
- **Output:** _true_ se a sentença é um palídromo, _falso_ caso negativo.

```
isPalindrome("ovo", 3);
Output: true
```

## 3. Primeira Letra Única

Implemente a função abaixo, a qual encontra a primeira letra que não se repete em uma sentença.

> Exemplos:
> "ovo" -> 'v',
> "cesar school" -> 'e',
> "sistemas digitais" -> 'e'

- **Função:** char firstNonRepeatingChar(char[] sentence, int length)
- **Input:**
  - sentence: array não nulo de letras, formado apenas por ASCII em minúsculo
  - length: tamanho do array - número de caracteres
- **Output:** A primeira letra que não se repete, ou -1, caso todas se repitam.

```
firstNonRepeatingChar("cesar school");
Output: e
```

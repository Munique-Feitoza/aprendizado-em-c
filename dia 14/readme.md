# Exercícios em Linguagem C — Fundamentos da Programação

Este repositório contém uma série de exercícios desenvolvidos em linguagem C, com foco em estruturas condicionais (if/else, switch/case), laços de repetição (for, while) e outros conceitos fundamentais. Os exercícios abordam diferentes desafios para consolidar o conhecimento em lógica de programação e manipulação de dados.

## Exercício 1 — Maior e Menor Valor
Lê três valores inteiros do teclado e, em seguida, imprime qual é o maior e qual é o menor valor entre eles.

📥 Entrada:
- Três números inteiros

📤 Saída:
- O maior valor inserido
- O menor valor inserido

---

## Exercício 2 — Contagem de Valores Positivos e Negativos
Lê cinco valores do teclado, um por vez, e conta quantos desses valores são positivos e quantos são negativos, mostrando o resultado final.

📥 Entrada:
- Cinco números inteiros, um por vez

📤 Saída:
- Quantidade de valores positivos
- Quantidade de valores negativos

---

## Exercício 3 — Verificação de Divisibilidade
Lê um número e verifica se ele é divisível por 2, 3 ou 5. Caso não seja divisível por nenhum deles, a mensagem correspondente é exibida.

📥 Entrada:
- Um número inteiro

📤 Saída:
- Mensagem indicando se o número é divisível por 2, 3, 5 ou nenhum deles

---

## Exercício 4 — Calculadora de IMC
Calcula o Índice de Massa Corporal (IMC) e informa ao usuário em qual categoria de peso ele se encontra (abaixo do peso, peso normal, sobrepeso, obesidade ou obesidade severa).

📥 Entrada:
- Peso em quilogramas (float)
- Altura em metros (float)

📤 Saída:
- O valor do IMC (formatado com duas casas decimais)
- Mensagem indicando a categoria de peso do usuário

---

## Exercício 5 — Mês com switch/case
Lê um número e, usando a estrutura switch/case, verifica se ele corresponde a um mês. Se for um mês válido, o nome é exibido; caso contrário, a mensagem "Número inválido" é impressa.

📥 Entrada:
- Um número inteiro (de 1 a 12)

📤 Saída:
- Nome do mês correspondente ao número
- Ou mensagem de "Número inválido!"

---

## Exercício 6 — Separação de Vogais e Consoantes
Lê uma string (uma sequência de caracteres) e separa as vogais das consoantes, exibindo-as.

📥 Entrada:
- Uma string (máximo 99 caracteres)

📤 Saída:
- Quantidade de vogais encontradas
- Quantidade de consoantes encontradas

---

## Exercício 7 — Número de Dias no Mês

Lê um número correspondente a um mês e exibe o número de dias que esse mês tem.

📥 Entrada:
- Um número inteiro (de 1 a 12)

📤 Saída:
- Mensagem indicando o número de dias no mês (Ex: "Este mês tem 31 dias.")
- Ou mensagem de "Número inválido!"

---

## Exercício 8 — Calculadora de Média

Permite ao usuário escolher o tipo de média que deseja calcular (aritmética, ponderada ou geométrica) e, em seguida, lê os valores necessários para realizar o cálculo e exibir o resultado.

📥 Entrada:
- Opção do tipo de média (1 para Aritmética, 2 para Ponderada, 3 para Geométrica)
- Três valores para a média aritmética e geométrica
- Três valores e seus respectivos pesos para a média ponderada (observação: o seu código atual para média ponderada está com uma pequena inconsistência, ele está lendo 6 floats e calculando com 3 variáveis. Recomendo revisar para garantir que os pesos sejam usados corretamente. No exemplo abaixo considerei 3 valores e 3 pesos.)

📤 Saída:
- O valor da média calculada (formatado com duas casas decimais)
- Ou mensagem de "Escolha inválida!"

---

## Exercício 9 — Classificador de Triângulos

Lê três números e verifica se eles podem formar um triângulo. Se puderem, o programa determina o tipo de triângulo: equilátero, isósceles ou escaleno. Se não for possível formar um triângulo, a mensagem "Não é possível formar um triângulo" é exibida.

📥 Entrada:
- Três valores para os lados de um possível triângulo

📤 Saída:
- Mensagem indicando o tipo de triângulo (Equilátero, Isósceles, Escaleno)
- Ou mensagem de "Não podem formar um triângulo."

---

## Como compilar e executar

1. Compile o arquivo com `gcc`:
   ```bash
   gcc exercicioX.c -o exercicioX
    ```
2. Execute o programa:
    ```bash
    ./exercicioX
    ```
Substitua X pelo número do exercício que deseja compilar e rodar.

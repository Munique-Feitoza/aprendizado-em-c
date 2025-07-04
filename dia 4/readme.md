# 📘 Dia 4 – Ponteiros com Strings (Aprendizado em C)

Hoje o foco foi compreender **como ponteiros se comportam com strings** (arrays de caracteres) e **visualizar os endereços de memória** de cada caractere.

## 🔍 Conceitos aprendidos:
- Ponteiros apontando para `char[]`
- Diferença entre o conteúdo do ponteiro `*p` e o endereço `(p)`
- Como strings são armazenadas na memória
- Como `strlen()` calcula o tamanho real de uma string
- Iteração com ponteiros para acessar posições de memória

## 🛠️ Projeto Prático:

O programa solicita que o usuário digite um nome e, em seguida, exibe:

- O índice de cada letra
- O conteúdo da letra
- O endereço de memória onde está armazenada

### 🧠 O que esse projeto ensina:
- Trabalhar com entrada do usuário em C
- Manipular strings com ponteiros
- Entender como ponteiros percorrem a memória

### 📁 Estrutura do código:
```c
char nome[50];            // Array para armazenar o nome
char *ponteiro = nome;    // Ponteiro aponta para o início do array
scanf("%49s", nome);      // Lê a string do usuário
strlen(nome);             // Calcula o tamanho da string

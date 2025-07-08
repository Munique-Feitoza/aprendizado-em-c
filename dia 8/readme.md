# Projeto: Funções em Linguagem C 🧠💻

Este projeto demonstra o uso de **funções em linguagem C** com exemplos simples e práticos. Os tópicos abordados vão desde operações matemáticas básicas até o uso de funções para verificar se um número é primo.

## ✨ Objetivos

- Praticar a criação e o uso de funções em C.
- Aprender a utilizar **prototipagem de funções** (function prototypes).
- Desenvolver a habilidade de **interação com o usuário via `scanf`**.
- Compreender a **organização de um programa em C** com funções reutilizáveis.

---

## 🧩 Funções Implementadas

1. `int sum(int a, int b)`  
   Recebe dois inteiros e retorna a soma entre eles.

2. `void greet(const char *name)`  
   Recebe uma string (nome) e imprime uma saudação personalizada.

3. `int square(int num)`  
   Recebe um número inteiro e retorna seu quadrado.

4. `unsigned long long factorial(int n)`  
   Calcula o fatorial de um número inteiro positivo.

5. `bool is_prime(int n)`  
   Verifica se um número inteiro é primo.

---

## 🖥️ Como Executar

1. Compile o código com um compilador C, como o GCC:
   ```bash
   gcc main.c -o programa
   ```

2. Execute o programa:
   ```bash
   ./programa
   ```

3. Interaja com o programa fornecendo as entradas solicitadas no terminal.

---

## ❓ O que são Function Prototypes e por que são importantes?

Em C, **function prototypes** (ou protótipos de função) são declarações antecipadas das funções que serão implementadas posteriormente no código. Um protótipo informa ao compilador:

- O **nome da função**;
- O **tipo de retorno** da função;
- Os **tipos e quantidade de parâmetros** que ela aceita.

Exemplo:
```c
int sum(int a, int b);
```

### ✅ Importância dos protótipos:
- Permitem que você **organize melhor o seu código**, colocando a `main()` antes da implementação das funções.
- **Evita erros de compilação**, garantindo que a chamada da função esteja consistente com sua definição.
- São essenciais para programas grandes, com vários arquivos ou bibliotecas externas.

---

## 🧠 Aprendizados com o Projeto

- Como declarar e usar funções.
- Como reutilizar código de forma modular.
- A importância de boas práticas na estruturação de programas C.

---

## 🔒 Requisitos

- Compilador C (GCC, Clang, Code::Blocks, etc).
- Sistema que suporte entrada e saída padrão pelo terminal.
- Biblioteca `locale.h` (já incluída nas distribuições padrão de C).

---

## 📚 Referências

- Documentação oficial da linguagem C (ISO C).
- [Programiz - C Programming](https://www.programiz.com/c-programming)
- [Learn-C.org](https://www.learn-c.org/)

---

Feito com dedicação para estudo de fundamentos em C. 🚀

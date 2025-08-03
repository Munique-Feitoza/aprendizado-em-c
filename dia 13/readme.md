# Analisador Léxico Simples em C

Este projeto é um **analisador léxico básico**, desenvolvido para estudar o funcionamento da etapa de análise léxica presente em compiladores.

---

## 🎯 Objetivo

Separar expressões matemáticas simples em **tokens**, como números, operadores e parênteses.

**Exemplo de entrada:**
```
12 + 8 * (5 - 3)
```

**Saída esperada:**
```
[NÚMERO: 12]
[OPERADOR: +]
[NÚMERO: 8]
[OPERADOR: *]
[ABRE_PARENTESES: (]
[NÚMERO: 5]
[OPERADOR: -]
[NÚMERO: 3]
[FECHA_PARENTESES: )]
```

---

## 💻 Como rodar

1. Compile o código
```
gcc lexer.c -o lexer
```

2. Execute o código
```
./lexer
```

3. Digite uma expressão matemática simples quando solicitado:
```
Exemplo: 12 + 3 * (5 - 1)
```

---

## 🛠️ Tecnologias Usadas

- Linguagem C
- `gcc` (compilador)
- Funções da `<ctype.h>` e `<string.h>`

---

## 🚧 Limitações

- Ainda não suporta ponto flutuante, variáveis ou expressões booleanas
- Não armazena os tokens em estruturas de dados (só imprime na tela)
- Não há análise sintática (apenas léxica)

---

## 👩‍💻 Autora

Munique Alves Pacheco Feitoza  
Estudante de Engenharia de Software e ADS | Apaixonada por sistemas, compiladores e computação de baixo nível

---

## 📌 Status

Projeto simples, **educacional**, criado com o objetivo de praticar a lógica de compiladores e ponteiros em C.

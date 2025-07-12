
# 📘 Dia 6 – Análise Sintática, Parsing e Ambiguidade

Neste dia, aprofundei meus estudos na **segunda etapa do compilador**: a **análise sintática**. Compreender esta etapa é essencial para quem deseja dominar como uma linguagem de programação valida estruturas de código.

---

## 🧠 Conceitos Principais

### ➤ Análise Sintática (Parsing)
É a etapa onde o compilador verifica se a sequência de tokens (gerada na análise léxica) **segue as regras gramaticais** da linguagem.

### ➤ Derivação mais à esquerda (Leftmost Derivation)
Você expande sempre o **símbolo mais à esquerda** primeiro. Ajuda na construção de parsers top-down (como os LL).

### ➤ Derivação mais à direita (Rightmost Derivation)
Você expande sempre o **símbolo mais à direita** primeiro. Utilizado em parsers bottom-up (como os LR).

### ➤ Ambiguidade
Quando uma mesma sentença pode ser derivada de múltiplas formas (duas ou mais árvores sintáticas diferentes), a gramática é **ambígua** e precisa ser **refatorada**.

### ➤ Fatoração à esquerda
Técnica usada para eliminar ambiguidade e facilitar o parsing recursivo:
```
Antes: A → aB | aC
Depois: A → aD
             D → B | C
```

### ➤ Recursão à esquerda
Algoritmos recursivos travam com recursão do tipo: `A → Aα`. Eliminar essa estrutura é fundamental em parsers top-down.

---

## 🔁 LL vs LR Parsers

| Tipo         | Derivação | Estratégia   | Exemplo        |
|--------------|-----------|--------------|----------------|
| LL (Top-down) | Esquerda  | Previsível   | Predictive parser (recursivo) |
| LR (Bottom-up)| Direita   | Redução      | Shift-reduce parser |

---

## 🏗️ Estrutura TDP vs BUP

- **TDP (Top-Down Parsing):** começa do símbolo inicial e tenta expandir.
- **BUP (Bottom-Up Parsing):** começa com os tokens e tenta reduzir até o símbolo inicial.

---

## 📌 Exemplo Didático em C

Aqui está um **simulador_de_parser_simplificado.c**, que reconhece expressões como `a + b + c` com base em uma gramática definida (R → R + R | a | b | c)

---

## 🎯 Propósito
Compreender análise sintática é fundamental para:

- Escrever compiladores e interpretadores
- Criar linguagens próprias
- Evitar ambiguidades e bugs em DSLs
- Entender profundamente como o código é validado

---

📚 Playlist: [Análise Sintática – Canal Aulas de Computação](https://www.youtube.com/playlist?list=PL0Z-gyL9saMcajYH26KWKQG0nH2C2fsMQ)

---

✨ Este estudo é parte da minha jornada rumo à engenharia de software profunda — conhecendo por dentro cada etapa que transforma código em algo que funciona de verdade.

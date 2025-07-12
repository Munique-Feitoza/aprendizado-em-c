# 🔍 Compiladores – Parte 2: LL(1), First/Follow e Introdução ao Parsing Bottom-Up

Nesta fase do estudo, aprofundei minha compreensão sobre a análise sintática, aprendendo a construir **parsers descendentes preditivos LL(1)** e iniciando a transição para técnicas **Bottom-Up**.

---

## 📚 Tópicos Estudados

### 🧠 Derivação à Esquerda e Direita
- Entendimento prático sobre como a ordem de derivação afeta a árvore sintática.
- Relevante para escolha entre estratégias **top-down** ou **bottom-up**.

### 🔄 Recursão à Esquerda
- Identificada como um problema comum em gramáticas LL(1).
- Aprendi a **refatorar gramáticas** para eliminar esse tipo de recursão.

### ✂️ Fatoração à Esquerda
- Técnica usada para tornar a gramática **não ambígua e adequada** para análise LL(1).
- Fundamental na construção de **tabela de parsing preditivo**.

---

## 📌 Conceitos-chave

### 📑 FIRST e FOLLOW
- **FIRST(X)**: todos os símbolos que podem iniciar uma derivação a partir de X.
- **FOLLOW(X)**: todos os símbolos que podem aparecer à direita de X em alguma produção.
- Essenciais para **construir a tabela sintática** sem ambiguidade.

### 🗂️ Tabela LL(1)
- Aprendi a montar a **tabela de parsing LL(1)** com base em regras FIRST/FOLLOW.
- Identifiquei gramáticas que não são LL(1) por apresentarem conflitos na tabela.

---

## ⬇️ Início do Bottom-Up Parsing
- Estudo do **parsing ascendente**, ou seja, construindo a árvore de baixo para cima.
- Reconhecimento de padrões e substituição de RHS por LHS da gramática.
- Começo da lógica de algoritmos como **Shift-Reduce** e **SLR/LR(1)** (ainda virão depois).

---

## 💡 Aplicação Prática

- Aprofundar-se em análise sintática melhora a compreensão sobre:
  - Otimização de compiladores.
  - Construção de interpretadores.
  - Design de linguagens.
- Ajuda também no domínio de ferramentas como **ANTLR**, **Bison**, **YACC** e **PLY**.

---

## 🧠 Conclusão do Dia

- Construí minhas primeiras tabelas LL(1).
- Identifiquei conflitos de parsing e refatorei gramáticas.
- Compreendi a transição natural para métodos mais robustos de parsing.

Dia 12 foi inteiramente **teórico**, focado na construção de base sólida para continuar nos parsers ascendentes.


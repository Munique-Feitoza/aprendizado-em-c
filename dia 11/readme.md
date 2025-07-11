# 📇 Projeto: Gerenciador de Agenda com Ponteiros e Alocação Dinâmica

Este projeto simula um pequeno sistema de agenda desenvolvido em C, com uso intensivo de **ponteiros**, **alocação dinâmica**, e **manipulação de strings**. Cada contato contém nome, telefone e email, e o sistema permite manipular esses dados dinamicamente.

## ✨ Objetivos

- Praticar o uso de ponteiros e ponteiros de ponteiros (`char **`);
- Utilizar `malloc`, `free` e `strdup` para gerenciar memória;
- Reforçar conceitos de manipulação de arrays de estruturas;
- Explorar **endereçamento de memória** com `printf("%p", ...)`;
- Criar uma função para inverter nomes com ponteiros.

## 🚀 Funcionalidades

- Cadastro de múltiplos contatos com alocação dinâmica;
- Impressão dos dados e endereços de memória;
- Inversão do nome de cada contato (ex: Ana → anA).

## 🧠 Conceitos Praticados

- Ponteiros e ponteiros de ponteiros;
- Alocação dinâmica (`malloc`, `free`);
- Manipulação de strings com `strdup` e `fgets`;
- Uso de funções para modularização e reutilização do código.

## 🔧 Como usar

```bash
gcc agenda.c -o agenda
./agenda
```

## 📚 Aprendizados

- Como manipular arrays dinâmicos de structs;
- Como usar char ** para alterar uma string via ponteiro;
- A importância de liberar memória (free) corretamente;
- Como rastrear onde estão os dados na memória.

Feito com dedicação como parte do meu estudo diário da linguagem C. 💻✨
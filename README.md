# Tema 4 — Movimentação de Peças de Xadrez (C)

Este repositório contém a solução do **Tema 4: Movimentação de Peças de Xadrez**, com foco no uso de **estruturas de repetição** e **recursividade** na linguagem **C**.

> ✅ Observação: este projeto **não é um jogo completo de xadrez**.  
> O objetivo é simular movimentos de peças usando **for**, **while**, **do-while**, **loops aninhados** e **recursividade**, conforme solicitado no desafio.

---

## 🎯 Objetivos do desafio

- Aplicar estruturas de repetição simples (**for**, **while**, **do-while**) para simular movimentos básicos:
  - **Torre**
  - **Bispo**
  - **Rainha**
- Aplicar **loops aninhados** para simular o movimento complexo em **"L"** do:
  - **Cavalo**
- Aplicar **recursividade** e condições para simular movimentos avançados.

---

## 🧠 Como a solução foi organizada

O arquivo principal é:

- `xadrez.c`

Dentro dele há funções separadas para cada peça/parte:

- `moverTorre(int casas)` → usa **for**
- `moverBispo(int casas)` → usa **while**
- `moverRainha(int casas)` → usa **do-while**
- `moverCavalo()` → usa **loops aninhados**
- `movimentoRecursivo(int casasRestantes)` → usa **recursividade**

Isso deixa o código mais limpo e fácil de entender.

---

## ▶️ Como executar

### Opção 1: Compilar no computador (Linux/Mac/Windows com GCC)
No terminal, dentro da pasta do projeto:

## 📌 Informações
Projeto desenvolvido como atividade acadêmica da disciplina de programação em C.

```bash
gcc xadrez.c -o xadrez
./xadrez

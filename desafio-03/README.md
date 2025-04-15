# 📊 Desafio 03 – Análise Numérica com Struct

Neste desafio, o objetivo é receber números inteiros positivos (até o usuário digitar 0) e calcular estatísticas sobre eles, utilizando **structs** para organização dos dados.

---

## 🎯 Funcionalidades

- Armazena até 10 números inteiros.
- Calcula:
  - Quantidade total de números digitados
  - Quantidade de pares, ímpares e múltiplos de 3
  - Soma, média, menor e maior valor
- Usa uma `struct` para guardar os dados em memória e facilitar o manuseio.
- Modularização com `main`, `.h` e `.c` de apoio.

---

## 📥 Entrada esperada

O usuário deve digitar números inteiros positivos. Digitar 0 encerra a entrada:

```bash
Digite um número inteiro: 12
Digite um número inteiro: 7
Digite um número inteiro: 3
Digite um número inteiro: 0

📤 Saída esperada

A quantidade de números digitados é: 3
A quantidade de números pares é: 1
A quantidade de números ímpares é: 2
A quantidade de múltiplos de 3 é: 2
A soma dos números é: 22
A média é: 7.33
O maior número é: 12
O menor número é: 3

🗂 Estrutura do Projeto

desafio-03/
├── src/
│   ├── analisa_numeros.c
│   ├── estatisticas.c
│   └── estatisticas.h
├── obj/
├── bin/
├── makefile
└── README.md

▶️ Compilar e Executar

make                    # Compila o projeto
./bin/analisa_numeros   # Executa o programa

📅 Última atualização

2025-04-10
✍️ Autor

Ashogun (Vandilson)
Estudante autodidata de Computação, em transição de carreira.
Foco em backend, engenharia de software e sistemas de alto desempenho.

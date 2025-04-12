# Desafio 02 – Análise de Dígitos com Ordenação

Este projeto em linguagem C recebe um número inteiro positivo, conta a ocorrência de cada dígito (de 0 a 9), e exibe a frequência de forma ordenada por número de ocorrências (frequência crescente), com desempate pelo menor dígito.

---

## 🎯 Objetivo

- Aprofundar o uso de vetores em C.
- Utilizar `struct` para representar múltiplas informações.
- Aplicar lógica de ordenação com múltiplos critérios.
- Modularizar o código com múltiplos arquivos `.c` e `.h`.

---

## 🛠️ Técnicas Aplicadas

- Estrutura `typedef struct` para armazenar `digito` e `frequencia`.
- Vetor de `struct` (`DigitoFreq arr[10]`) para controle de dados.
- Algoritmo **Bubble Sort** para ordenação por:
  - Frequência crescente.
  - Menor valor de dígito em caso de empate.
- Separação do código em:
  - `main.c` para fluxo principal.
  - `contador.c/.h` para contagem de dígitos.
  - `ordenador.c/.h` para ordenação e impressão.

---

## 💡 Exemplo de Entrada

```text
Digite um número inteiro positivo: 2233445566

📤 Saída esperada

Dígito 0: 0 vez(es)
Dígito 1: 0 vez(es)
Dígito 7: 0 vez(es)
Dígito 8: 0 vez(es)
Dígito 9: 0 vez(es)
Dígito 2: 2 vez(es)
Dígito 3: 2 vez(es)
Dígito 4: 2 vez(es)
Dígito 5: 2 vez(es)
Dígito 6: 2 vez(es)

🗂 Estrutura do Projeto

desafio-02/
├── src/
│   ├── conta_digitos_ordenado.c
│   ├── contador.c
│   ├── contador.h
│   ├── ordenador.c
│   └── ordenador.h
├── obj/
├── bin/
└── makefile

▶️ Compilar e Executar

make                      # Compila o projeto
./conta_digitos_ordenado  # Executa o binário

📅 Última atualização

2025-04-09

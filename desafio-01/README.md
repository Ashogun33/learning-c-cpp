# Desafio 01 – Contador de Dígitos

Este projeto em linguagem C foi desenvolvido para contar a ocorrência de cada dígito (de 0 a 9) em um número inteiro positivo informado pelo usuário.

---

## 🎯 Objetivo

- Consolidar o uso de **vetores em C** como contadores.
- Praticar **divisão e módulo** para extração de dígitos.
- Fortalecer a lógica de **laços de repetição** e estruturas sequenciais.

---

## 🛠️ Técnicas Aplicadas

- Vetor `int digito[10]` para armazenar a contagem de cada dígito.
- Laço `while` para decompor o número (`n % 10`) e reduzir (`n /= 10`).
- Impressão formatada com `printf`.
- Organização de projeto com `Makefile`.

---

## 💡 Exemplo de Entrada

```text
Digite um número: 1223


📤 Saída esperada

Dígito 0: 0 vez(es)
Dígito 1: 1 vez(es)
Dígito 2: 2 vez(es)
Dígito 3: 1 vez(es)
Dígito 4: 0 vez(es)
Dígito 5: 0 vez(es)
Dígito 6: 0 vez(es)
Dígito 7: 0 vez(es)
Dígito 8: 0 vez(es)
Dígito 9: 0 vez(es)

🗂 Estrutura do Projeto

desafio-01/
├── src/
│   └── conta_digitos.c
├── obj/
├── bin/
└── makefile

▶️ Compilar e Executar

make              # Compila o projeto
./conta_digitos   # Executa o binário gerado

📅 Última atualização

2025-04-09

# 🧮 Desafio 03 – Análise Numérica Simples

Este desafio recebe até 10 números inteiros positivos digitados pelo usuário e exibe estatísticas básicas ao final.

---

## 🎯 Funcionalidades

- Armazena até 10 números inteiros positivos.
- Encerra o programa ao digitar 0.
- Calcula:
  - Quantidade total de números digitados
  - Quantidade de pares e ímpares
  - Quantidade de múltiplos de 3
  - Soma e média
  - Maior e menor número

---

## 📥 Entrada esperada

O usuário digita números até digitar 0:

```bash
Digite um número inteiro: 12
Digite um número inteiro: 7
Digite um número inteiro: 3
Digite um número inteiro: 0

📤 Saída esperada

A quantidade de números digitados é: 3
A quantidade de números pares é: 1
A quantidade de números ímpares é: 2
A quantidade de números divisíveis por 3 é: 2
A soma dos números é: 22
A média é: 7.33
O maior número é: 12
O menor número é: 3

🗂 Estrutura do Projeto

desafio-03/
├── src/
│   ├── analisa_numeros.c      # Função principal
│   ├── estatisticas.c         # Função auxiliar para análise
│   └── estatisticas.h         # Header com protótipo da função
├── obj/                       # Arquivos objetos (.o)
├── bin/                       # Executável compilado
├── makefile                   # Script de build
└── README.md                  # Documentação do projeto

▶️ Compilar e Executar

make                    # Compila o projeto
./bin/analisa_numeros   # Executa o binário gerado

📅 Última atualização

2025-04-10

✍️ Autor

Ashogun (Vandilson)
Estudante autodidata de Computação em transição de carreira.
Foco em backend, engenharia de software e sistemas de alto desempenho.

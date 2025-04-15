#include <stdio.h>
#include "estatisticas.h"

void calcular_estatisticas(Estatisticas *dados) {
  if (dados->quantidade == 0)return;

  dados->maior = dados->numeros[0];
  dados->menor = dados->numeros[0];

  for (int i = 0; i < dados->quantidade; i++) {
    int valor = dados->numeros[i];
    if (valor % 2 == 0) dados->pares++;
    else dados->impares++;
    
    if (valor % 3 == 0) dados->multiplo3++;
    if (valor > dados->maior) dados->maior = valor;
    if (valor < dados->menor) dados->menor = valor;
  }
  
  dados->media = (float)dados->soma / dados->quantidade;

  printf("\nA quantidade de números digitados é: %d", dados->quantidade);
  printf("\nA quantidade de números pares é: %d", dados->pares);
  printf("\nA quantidade de números impares é: %d", dados->impares);
  printf("\nA quantidade de números divisiveís por 3 é: %d", dados->multiplo3);
  printf("\nA soma dos números é: %d", dados->soma);
  printf("\nA média é: %.2f", dados->media);
  printf("\nO maior número é: %d", dados->maior);
  printf("\nO menor número é: %d", dados->menor);

}

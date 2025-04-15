#include <stdio.h>
#include "estatisticas.h"

void estatisticas(int numero[10], int i, int q, int soma, int maior, int menor, float media) {

  media = (float)soma/q;
  maior = numero[0];
  menor = numero[0];
  int numPar = 0;
  int numImpar = 0;
  int multiplo3 = 0;

  for (i = 0; i < q; i++) {
    if (numero[i] % 2 == 0) {
      numPar += 1;
    }
    if (numero[i] % 2 != 0) {
      numImpar += 1;
    }
    if (numero[i] % 3 == 0) {
      multiplo3 += 1;
    
    }
    if (maior < numero[i]) {
      maior = numero[i];
    }
    if (menor > numero[i]) {
      menor = numero[i];
    }
  }
  
  printf("\nA quantidade de números digitados é: %d", q);
  printf("\nA quantidade de números pares é: %d", numPar);
  printf("\nA quantidade de números impares é: %d", numImpar);
  printf("\nA quantidade de números divisiveís por 3 é: %d", multiplo3);
  printf("\nA soma dos números é: %d", soma);
  printf("\nA média é: %.2f", media);
  printf("\nO maior número é: %d", maior);
  printf("\nO menor número é: %d", menor);
}

#include <stdio.h>
#include "estatisticas.h"

int main() {
  int numero[10] = {0};
  int n = 1;
  int i =0, q = 0, soma = 0, maior = 0, menor = 0;
  float media = 0;
  
  while (n != 0) {
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (n == 0) {
      break;
    }

    numero[i] = n;
    i++;
    q += 1;
    soma += n;
  }
    estatisticas(numero, i, q, soma, maior, menor, media);

return 0;

}


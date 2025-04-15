#include <stdio.h>
#include "estatisticas.h"

//Função Principal do contador de digitos ordenado.

int main() {
  
  Estatisticas dados = {0};
  int n = 1;
    
  while (n != 0 && dados.quantidade < 10) {
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (n == 0) {
      break;
    }

    dados.numeros[dados.quantidade++] = n;
    dados.soma += n;
  }
  
  calcular_estatisticas(&dados);

return 0;

}

#include <stdio.h>
#include "contador.h"
#include "ordenador.h"

//Função Principal do contador de digitos ordenado.

int main() {
  unsigned int numero = 0;
  int digitos[10] ={0};

  printf("Digite um número inteiro positivo: ");
  scanf("%u", &numero);
  
  conta_digitos(numero, digitos);
  
  ordena_digitos(digitos);
 
  return 0;
}

#include "contador.h"

void conta_digitos(unsigned int numero, int digitos[10]) {
  
    while (numero > 0) {
        int d = numero % 10;
        digitos[d]++;
        numero /= 10;
    }
}

#include <stdio.h>

int main() {

  int digito[10] = {0};
  int n = 0;

  printf("digite um número: ");
  scanf("%d", &n);
  printf("Os dígitos são:\n");

    while (n > 0) {
     
      int d = n % 10;
      digito[d]++;
      n /= 10;
      
    }  
      for (int i = 0; i < 10; i++) {
        printf("Dígito %d: %d vez(es)\n", i, digito[i]);
      }

  return 0;
}

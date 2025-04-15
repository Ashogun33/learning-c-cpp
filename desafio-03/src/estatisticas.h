#ifndef ESTATISTICA_H
#define ESTATISTICA_H

typedef struct {

   int numeros[10];
   int i;
   int quantidade;
   int soma;
   int maior;
   int menor;
   float media;
   int impares;
   int pares;
   int multiplo3;
} Estatisticas;

void calcular_estatisticas(Estatisticas *dados);

#endif


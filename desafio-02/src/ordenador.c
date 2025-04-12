#include <stdio.h>
#include "ordenador.h"

// Definindo o tipo de estrutura
typedef struct {
    int digito;
    int frequencia;
} DigitoFreq;

void ordena_digitos(int digitos[10]) {
    DigitoFreq arr[10];

    // Preenche a struct com os dados do array simples
    for (int i = 0; i < 10; i++) {
        arr[i].digito = i;
        arr[i].frequencia = digitos[i];
    }

    // Ordenação por Bubble Sort:
    // 1º critério: frequência crescente
    // 2º critério: menor dígito em caso de empate
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (
                arr[j].frequencia > arr[j + 1].frequencia || 
                (arr[j].frequencia == arr[j + 1].frequencia && arr[j].digito > arr[j + 1].digito)
            ) {
                // Troca os registros de lugar
                DigitoFreq temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Impressão final ordenada
    for (int i = 0; i < 10; i++) {
        printf("Dígito %d: %d vez(es)\n", arr[i].digito, arr[i].frequencia);
    }
}

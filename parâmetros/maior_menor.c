/*
Escreva uma função chamada MaiorMenor que recebe dois parâmetros, A e B, e devolve:
    - o menor dos dois em A 
    - o maior dos dois em B.
Caso sejam passados valores iguais, a ordem da resposta entre eles não importa.
*/

#include <stdio.h>

void MaiorMenor(int *A, int *B) {
    int aux;
    
    // Atualiza a ordenação dos números
    if (*A > *B) {
        aux = *A;
        *A = *B;
        *B = aux;
    }
}

int main() {
    int a, b;

    printf("Digite dois numeros: \n");
    scanf("%d %d", &a, &b);

    MaiorMenor(&a, &b); // Chamada de função

    printf("Maior = %d\n"
           "Menor = %d\n", b, a); // Mostra os valores em ordem decrescente

    return 0;
}
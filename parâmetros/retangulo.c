/*
Escreva uma função chamada medidasDoRetangulo que recebeos parâmetros b e h 
(as medidas em centímetros dos dois lados de um retângulo) e devolve, em parâmetros:
 A e P, respectivamente, a área (b*h) e o perímetro (2*(b+h)) deste retângulo. 
 Mostre os resultados na função main().
*/

#include <stdio.h>

void MedidasDoRetangulo(float b, float h, float *a, float *p) {
    *a = b * h;
    *p = 2 * (b + h);
}

int main() {
    float base, altura, area, perimetro;

    printf("Digite a base do retangulo [EM CENTIMETROS(cm)]: \n");
    scanf("%f", &base);
    printf("Digite a altura do retangulo [EM CENTIMETROS(cm)]: \n");
    scanf("%f", &altura);

    MedidasDoRetangulo(base, altura, &area, &perimetro);

    printf("Area = %.2f\n"
           "Perimetro = %.2f\n", area, perimetro);

    return 0;
}
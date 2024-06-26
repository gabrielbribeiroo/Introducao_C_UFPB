/*
/*
Fazer um programa para ler uma string e um caracter qualquer.
Calcular o número de ocorrências desse caracter na string.
Exemplo: Seja a string "maracatu" e o caracter 'a', então o número de
ocorrências de 'a' é 3.
*/

#include <stdio.h>

int ocorrencia(const char *str, char C) {
    int i, cont = 0;

    for (i = 0; str[i] != '\0'; i++) {
        // Verifica se o caractere da string é igual ao digitado
        if (str[i] == C) {
            cont++; // Conta a quantidade de caracteres iguais ao digitado
        }
    }

    return cont; // Retorna a quantidade
}

int main() {
    char letra, frase[50];

    printf("Digite uma frase: ");
    fgets(frase, 50, stdin); // Leitura da string

    printf("Digite um caractere: ");
    letra = getchar(); // Leitura do caractere a ser procurado

    printf("O caractere %c aparece %d vezes na frase %s", letra, ocorrencia(frase, letra), frase); // Chamada da função
    
    return 0;
}

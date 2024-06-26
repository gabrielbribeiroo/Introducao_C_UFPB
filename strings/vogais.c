/*
Faça um programa que calcule e mostre o número de vogais de uma string. 
Feito isso, o programa deve criptografar uma frase dada pelo usuário (a criptografia troca as vogais da frase por *).
Frase: eu estou na escola
Saída: ** *st** n* *sc*l*
*/

#include <stdio.h>
#include <string.h>

int ContarVogais(const char *str) {
    int i, cont = 0; 
    char vogais[] = "aeiouAEIOU"; // Vetor com todas as vogais

    for (i=0; str[i]!='\0'; i++) {
        // Verifica se tem alguma vogal presente na string
        if (strchr(vogais, str[i]) != NULL) {
            cont++; // Conta a recorrência de vogais
        }
    }
 
    return cont; // Retorna a quantidade vogais
}

void CriptografarVogais(char *str) {
    int i;
    char vogais[] = "aeiouAEIOU";

    for (i=0; str[i]!='\0'; i++) {
        if (strchr(vogais, str[i]) != NULL) {
            str[i] = '*'; // Troca as vogais da string por *
        }
    }
}

int main() {
    char frase[101];

    printf("Digite uma frase: [MAXIMO DE 100 CARACTERES]\n");
    fgets(frase, 101, stdin); // Leitura da string

    // Chamada das funções
    printf("Numero de vogais na frase: %d\n", ContarVogais(frase));
    CriptografarVogais(frase);
    printf("Frase criptografada: %s\n", frase);

    return 0;
}
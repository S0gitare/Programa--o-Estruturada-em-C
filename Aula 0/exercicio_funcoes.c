/*Desenvolva um algoritmo que descobre se um número é par ou impar.
Faça uma função para resolver este problema retornando 1, caso seja
par, ou 0, caso seja impar.*/

#include <stdio.h>

int ehpar(int numero) {
    if (numero % 2 == 0) {
        return 1; // É par // retorna verdadeiro
    } else {
        return 0; // É ímpar // retorna false
    }
}

int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    if (ehpar(numero)){
        printf("O numero %d eh par.\n", numero);
    } else {
        printf("O numero %d eh impar.\n", numero);
    }
    return 0;
}
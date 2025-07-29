/*Desenvolva um algoritmo que descobre se um número é par ou impar.
Faça este algoritmo para os 100 primeiros valores inteiros a partir de
zero. Implemente com for.*/

#include <stdio.h>

int main(){
    int numero;
    for (numero = 0; numero <= 100; numero++) {
        if (numero % 2 == 0){
            printf("O numero %d eh par.\n", numero);
        } else {
            printf("O numero %d eh impar.\n", numero);
        }
    }
    return 0;
}
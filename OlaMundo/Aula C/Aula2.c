#include<stdio.h>
int main(){

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Digite o numero 1: \n");
    scanf("%d", &numero1);

    printf("Digite o numero 2: \n");
    scanf("%d", numero2);

    soma = numero1 + numero2;

    subtracao = numero1 - numero2;

    multiplicacao = numero1 * numero2;

    divisao = numero1 / numero2;

    printf("A soma é: %d\n", soma);
    
}
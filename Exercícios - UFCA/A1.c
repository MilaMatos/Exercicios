#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
//A1. Faça um programa que receba um valor de uma compra, para se calcular o valor da
//compra com desconto de 10% na compra e em seguida imprima o valor original da
//compra e com desconto.
 
int main () {
    setlocale(LC_ALL, "");
 
 float valor, desconto;
 
printf("Digite o valor da sua compra: ");
scanf("%f", &valor);
 
desconto = valor*0.1;
 
printf("O valor inicial era: R$%.2f \n", valor);
printf("Com desconto agora é: R$%.2f \n", (valor-desconto));
 
 
return(0);
}

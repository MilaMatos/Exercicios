#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
 
//Faça um programa que receba um número racional, calcule e imprima o teto desse
//número. (Exemplo: Caso o valor inserido seja o número 2.12331211 o sistema deve
//imprimir o número 3.00).
 
int main () {
    setlocale(LC_ALL, "");
 
float numero, arredondado;
 
printf("Insira um número racional: ");
scanf("%f", &numero);
 
arredondado = ceil(numero);
printf("O teto desse número é: %f \n", arredondado);
return(0);
}

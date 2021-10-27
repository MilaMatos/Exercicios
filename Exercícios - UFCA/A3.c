#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
//A.3. Uma empresa de aluguel de carros deseja adquirir um sistema de autoatendimento
//para seus clientes, onde informando o total de dias e o número quilômetros que se
//planeja percorrer com o carro alugado o sistema informe o valor do aluguel a ser
//pago. Faça um programa que receba o número de dias e quilômetros, para se calcular
//o valor que um cliente deve pagar (use o valor do aluguel por dia de R$80,00 e o valor
//adicional por quilômetro rodado igual a R$0,09), imprima o valor final na tela.
 
int main () {
    setlocale(LC_ALL, "");
 
 float dias, km, valor;
printf("Bem vindo! \n");
printf("Insira por quantos dias planeja alugar: ");
scanf("%f", &dias);
printf("Insira quantos km planeja percorrer: ");
scanf("%f", &km);
 
valor = (80*dias) + (km*0.09);
 
printf("\nO valor total é: R$%.2f \n", valor);
 
return(0);
}

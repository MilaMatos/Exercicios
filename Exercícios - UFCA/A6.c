#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
 
//Melinda e Kauan são dois amigos que jogam xadrez por oito horas todos os dias. Faça
//um programa que receba uma quantidade de anos e imprima:
//O total de tempo que eles jogaram xadrez juntos em horas;
//O total de tempo que eles jogaram xadrez juntos em minutos;
//O total de tempo que eles jogaram xadrez juntos em segundos.
 
int main () {
    setlocale(LC_ALL, "");
float anos, horas, minutos, segundos;
  printf("Insira a quantidade de anos jogando xadrez: ");
  scanf("%f", &anos);
horas = anos*365*8;
minutos = horas*60;
segundos = minutos*60;
printf("\nQuantidade de horas jogadas: %.2f\n", horas);
printf("\nQuantidade de minutos jogados: %.2f\n", minutos);
printf("\nQuantidade de segundos jogados: %.2f\n\n", segundos);
 
return(0);
}

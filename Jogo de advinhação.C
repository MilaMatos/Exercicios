#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
 void main() {
    setlocale(LC_ALL, "");
   srand((unsigned)time(NULL));

   //declarando variáveis
   int numero_secreto = rand() % 11;
   int numero_secreto2 = rand() % 101;
   int numero_secreto3 = rand() % 1001;
   int tentativa, nivel;
    //escolha de nivel
 while(nivel > 1 || nivel < 3){
    printf("Bem vindo ao jogo de advinhação");
    printf("\n\n 1 - Fácil\n 2 - Médio\n 3 - Difícil");
    printf("\nEscolha o nível: ");
    scanf("%d", &nivel);

    switch(nivel){
    //NIVEL 1
case 1: {
    for(;;){
    printf("\n\nEscola um número de 0 a 10: ");
    scanf("%d", &tentativa);

if (numero_secreto > tentativa){
    printf("Que pena, você errou\n");
    printf("O número secreto é maior"); }

if(numero_secreto < tentativa)  {
    printf("Que pena, você errou\n");
    printf("O número secreto é menor"); }
    if (numero_secreto == tentativa) {
    printf("PARABÉNS, VOCÊ ACERTOU!!!\n\n");
    return(0); }
}
}
    //NIVEL 2
    case 2: {
for(;;){
    printf("\n\nEscola um número de 0 a 100: ");
    scanf("%d", &tentativa);

if (numero_secreto2 > tentativa){
    printf("Que pena, você errou\n");
    printf("O número secreto é maior"); }

if(numero_secreto2 < tentativa)  {
    printf("Que pena, você errou\n");
    printf("O número secreto é menor"); }
if (numero_secreto2 == tentativa) {
    printf("PARABÉNS, VOCÊ ACERTOU!!!\n\n");
    return(0); }
}
}
    //NIVEL 3
 case 3: {
for(;;){
    printf("\n\nEscola um número de 0 a 1000: ");
    scanf("%d", &tentativa);

if (numero_secreto3 == tentativa) {
    printf("PARABÉNS, VOCÊ ACERTOU!!!\n\n");
    break; }
if (numero_secreto3 > tentativa){
    printf("Que pena, você errou\n");
    printf("O número secreto é maior"); }

if(numero_secreto3 < tentativa)  {
    printf("Que pena, você errou\n");
    printf("O número secreto é menor"); }
}
}
default:
printf ("\nOPÇÃO INVÁLIDA\nTente novamente...\n\n");
 }
 }
 }

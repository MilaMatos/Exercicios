#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
//A.2. O time de futsal amador União do Dragão Z deseja calcular o seu percentual de gols
//em um campeonato. Faça um programa que receba o número de gols que o time
//realizou no campeonato e o número total de gols no campeonato. Em seguida,
//imprima o percentual de gols.
 
int main () {
    setlocale(LC_ALL, "");
 float gols, total, percentual;
 
printf("Digite a quantidade de gols feitos: ");
scanf("%d", &gols);
printf("Digite a quantidade total gols do campeonato: ");
scanf("%d", &total);
 
percentual = 100*(gols/total);
printf("\nSeu percentual de gols feitos foi: %.2f%% \n", percentual);
 
return(0);
}

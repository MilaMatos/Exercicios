#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
 
//A.4. Faça um programa em que receba um número e em seguida calcule e imprima:
//a) Esse número na 2a potência;
//b) Esse número na 5a potência;
//c) Esse número na 9a potência;
//d) Esse número na 10a potência.
 
int main () {
    setlocale(LC_ALL, "");
 
int numero,a,b,c,d;
printf("Insira um número: ");
scanf("%d", &numero);
 
a = pow(numero,2);
b = pow(numero,5);
c = pow(numero,9);
d = pow(numero,10);
 
printf(" %d \n %d \n %d \n %d \n", a, b, c, d);
return(0);
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
 
//Faça um programa que receba o valor do comprimento de um dos catetos e da
//hipotenusa de um triangulo retângulo. Em seguida calcule e imprima o valor do lado
//do triangulo restante e o seu perímetro.
 
int main () {
    setlocale(LC_ALL, "");
float hipotenusa, cateto1, cateto2, perimetro;
    printf("Insira o comprimento do cateto: ");
    scanf("%f", &cateto1);
    printf("Insira o comprimento da hipotenusa: ");
    scanf("%f", &hipotenusa);
cateto2 = sqrt((pow(hipotenusa,2)) - (pow(cateto1,2)));
perimetro = hipotenusa + cateto1 +  cateto2;
printf("\nO comprimento do segundo cateto é: %f", cateto2);
printf("\nO perímetro do triângulo é: %f\n\n", perimetro);
return(0);
}

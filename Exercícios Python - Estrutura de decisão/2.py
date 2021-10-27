#Faça um Programa que leia três números e mostre o maior e o menor deles.

a = float(input('Digite o primeiro valor: '))
b = float(input('Digite o segundo valor: '))
c = float(input('Digite o terceiro valor: '))

if b < a and b < c:
    menor = b
elif c < a and c < b:
    menor = c
else:
    menor = a

if a > b and a > c:
   print('O maior valor é %f e o menor valor é %f' %(a, menor))
elif b > a and b > c:
   print('O maior valor é %fe o menor valor é %f' %(b, menor))
else:
   print('O maior valor é %fe o menor valor é %f' %(c, menor))

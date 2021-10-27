#Faça um programa para a leitura de duas notas parciais de um aluno.
#O programa deve calcular a média alcançada por aluno e apresentar:
#A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
#A mensagem "Reprovado", se a média for menor do que sete;
#A mensagem "Aprovado com Distinção", se a média for igual a dez.

media1 = float(input('Digite a primeira nota: '))
while media1 < 0 or media1 > 10:
   media1 = float(input('Erro\nDigite a primeira nota: '))
media2 = float(input('Digite a segunda nota: '))
while media2 < 0 or media2 > 10:
   media2 = float(input('Erro\nDigite a segunda nota: '))
media = (media1 + media2)/2
if media < 7:
   print('Reprovado')
elif media > 7 and media < 10:
   print('Aprovado')
else:
   print('Aprovado com Distinção')

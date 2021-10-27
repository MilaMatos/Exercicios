#As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores
#e lhe contrataram para desenvolver o programa que calculará os reajustes.
#Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual:
#salários até R$ 280,00 (incluindo) : aumento de 20%
#salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
#salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
#salários de R$ 1500,00 em diante : aumento de 5% Após o aumento ser realizado, informe na tela:
#o salário antes do reajuste; o percentual de aumento aplicado; o valor do aumento; o novo salário, após o aumento;

import time

salarioinicial = float(input('DIgite seu salário: '))
if salarioinicial <= 280 and salarioinicial > 0:
    salariox = salarioinicial * 1.2
    reajuste = '20%'
    aumento = salarioinicial * 0.2
elif salarioinicial > 280 and salarioinicial <= 700:
    salariox = salarioinicial * 1.15
    reajuste = '15%'
    aumento = salarioinicial * 0.15

elif salarioinicial > 700 and salarioinicial <= 1500:
    salariox = salarioinicial * 1.1
    reajuste = '10%'
    aumento = salarioinicial * 0.1
elif salarioinicial > 1500:
    salariox = salarioinicial * 1.05
    reajuste = '5%'
    aumento = salarioinicial * 0.05
else:
    salarioinicial = float(input('Valor inválido!\n DIgite seu salário: '))

print('Seu reajuste foi de %s com um aumento de: R$%.2f' % (reajuste, aumento))
time.sleep(1)
print('Seu salário antes era: R$%.2f e agora é: R$%.2f' % (salarioinicial, salariox))

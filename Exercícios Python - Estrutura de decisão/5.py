#Faça um programa para o cálculo de uma folha de pagamento, sabendo que os descontos são do Imposto de Renda, que depende do salário bruto
# (conforme tabela abaixo) e 3% para o Sindicato e que o FGTS corresponde a 11% do Salário Bruto, mas não é descontado (é a empresa que deposita).
# O Salário Líquido corresponde ao Salário Bruto menos os descontos.
# O programa deverá pedir ao usuário o valor da sua hora e a quantidade de horas trabalhadas no mês.
#Desconto do IR:
#Salário Bruto até 900 (inclusive) - isento
#Salário Bruto até 1500 (inclusive) - desconto de 5%
#Salário Bruto até 2500 (inclusive) - desconto de 10%
#Salário Bruto acima de 2500 - desconto de 20% Imprima na tela as informações

import time

salario_hora = float(input('Digite o salário por hora: '))
horas_mes = float(input('Digite a carga horária por mês: '))
salario_bruto = salario_hora * horas_mes

if salario_bruto <= 900 and salario_bruto > 0:
    ir = 0
    sindicato = salario_bruto * 0.03
    fgts = salario_bruto * 0.11
elif salario_bruto > 900 and salario_bruto <= 1500:
    ir = salario_bruto * 0.05
    sindicato = salario_bruto * 0.03
    fgts = salario_bruto * 0.11
elif salario_bruto > 1500 and salario_bruto <= 2500:
    ir = salario_bruto * 0.1
    sindicato = salario_bruto * 0.03
    fgts = salario_bruto * 0.11
else:
    ir = salario_bruto * 0.2
    sindicato = salario_bruto * 0.03
    fgts = salario_bruto * 0.11

inss = salario_bruto * 0.1
descontos_total = inss + ir + sindicato
salario_liquido = salario_bruto - descontos_total

time.sleep(0.5)
print('Salário bruto:         R$%.2f' % salario_bruto)
time.sleep(0.5)
print('Imposto de renda:      R$%.2f' % ir)
time.sleep(0.5)
print('INSS:                  R$%.2f' % inss)
time.sleep(0.5)
print('Sindicato:             R$%.2f' % sindicato)
time.sleep(0.5)
print('FGTS:                  R$%.2f' % fgts)
time.sleep(0.5)
print('Total de desconstos:   R$%.2f' % descontos_total)
time.sleep(1)
print('\nSalário líquido:       R$%2.f' % salario_liquido)
time.sleep(2)

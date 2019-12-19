# Faça um Programa que peça as 4 notas bimestrais e mostre a média.

notas = []

for cu in range(4):
    bumbum = int(input("diz aí as notas brother: "))
    notas.append(bumbum)

soma = int(0)
for nota in notas:
    soma = soma + int(nota)

media = float(soma/4)
print("média:", media)
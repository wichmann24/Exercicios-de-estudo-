soma = 0
for cont in range(1, 501, 2):
    if cont % 3 == 0:
        soma = soma + cont
print('Soma de todos o valores {}'.format(soma))

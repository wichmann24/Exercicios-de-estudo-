valor = 0
for c in range(0, 7):
    num = int(input('digite um numero: '))
    if num % 2 == 0:
        valor += num
print('A soma de todos o valor pares: {}'.format(valor))

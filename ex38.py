numero1 = int(input('Fale um numero: '))
numero2 = int(input('Fale outro numero: '))
if numero1 > numero2:
    print('O numero {} é maior que {}'.format(numero1, numero2))
elif numero2 > numero1:
    print('O numero {} é maior que {}'.format(numero2, numero1))
elif numero1 == numero2:
    print('O numero {} é {} são iguais!'.format(numero1, numero2))

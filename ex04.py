n1 = int(input('Fale um numero: '))
n2 = int(input('Fale outro numero: '))
s = n1 + n2
m = n1 * n2
d = n1 / n2
di = n1 // n2
e = n1 * n2
print('O valor da soma è {}, o valor da multiplicação é {} é o valor da divisão {:.3f}'.format(s, m, d), end=' ')
print('Valor da divisão interira {} é o valor de potencia {}'.format(di, e))

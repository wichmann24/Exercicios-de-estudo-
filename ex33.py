n1 = int(input('Fale um numero: '))
n2 = int(input('Fale outro numero: '))
n3 = int(input('Fale o ultimo numero: '))
menor = n1
if n2 < n1 and n2 < n3:
    menor = n2
if n3 < n1 and n3 < n2:
    menor = n3
maior = n1
if n2 > n1 and n2 > n3:
    maior = n2
if n3 > n1 and n3 > n2:
    maior = n3
print('O menor é {}'.format(menor))
print('O maior é {}'.format(maior))

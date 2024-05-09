n = str(input('Fale o seu nome completo: ')).strip()
n1 = n.split()
print('O nome completo é {}'.format(n))
print('Primeiro nome {}'.format(n1[0]))
print('Ultimo nome {}'.format(n1[len(n1)-1]))


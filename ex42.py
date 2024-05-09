r1 = float(input('Fale um segmento: '))
r2 = float(input('Fale outro segmento: '))
r3 = float(input('Fale mais um segmento: '))
if r1 < r2 + r3 and r2 < r1 + r3 and r2 < r1 + r3:
    print('Tem como formar um triangulo', end=' ')
    if r1 == r2 == r3:
        print('Equilitero')
    if r1 != r2 != r3 != r1:
        print('Escaleno')
    else:
        print('Isosceles')

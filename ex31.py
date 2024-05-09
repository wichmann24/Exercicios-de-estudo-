v = float(input('Qual a distancia de sua viagem? '))
if v <=200:
    v1 = v * 0.50
    print('O valor na sua passagem ficou R${}'.format(v1))
else:
    v2 = v * 0.45
    print('O valor da sua viagem é R${}'.format(v2))

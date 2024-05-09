salario = float(input('Fale seu salario: '))
if salario <= 1250:
    maior = 0.15
    calculo1 = (salario * maior) + salario
    print('Seu aumento foi de 15% e ficou R${}'.format(calculo1))
else:
    menor = 0.10
    calculo2 = (salario * menor) + salario
    print('Seu aumento foi de 10% e ficou RS{}'.format(calculo2))



from datetime import date
atual = date.today().year
ano = int(input('Fale o ano que você nasceu: '))
idade = atual - ano
print('O atleta tem {} anos'.format(idade))
if idade <= 9:
    print('Classificação mirim.')
elif idade > 9 and idade <= 14:
    print('Classificação infantil.')
elif idade > 14 and idade <= 19:
    print('Classificação junior.')
elif idade > 19 and idade <= 25:
    print('Classificação sênior.')
else:
    print('Classificação master.')

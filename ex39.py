from datetime import date
atual = date.today().year
nascimento = int(input('Em ano você nasceu ? '))
idade = atual - nascimento
print('Você nasceu {} e você terá de idade {} em {} '.format(nascimento, idade, atual))
if idade == 18:
    print('Você precisa se alistar!')
elif idade < 18:
    saldo = 18 - idade
    print('Não está na hora de se alistar faltam {} anos '.format(saldo))
elif idade > 18:
    saldo = idade - 18
    print('Você passou da sua idade para se alistar ja se faz {} anos'.format(saldo))



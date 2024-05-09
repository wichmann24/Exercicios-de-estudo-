nota1 = float(input('Diga uma nota: '))
nota2 = float(input('Diga mais outra nota: '))
media = (nota1 + nota2) / 2
if media >= 5.0 and media < 7:
    print('Você está de recuperação sua media ficou {}'.format(media))
elif media >= 7:
    print('Você passou direto seu media ficou {}'.format(media))
elif media < 5:
    print('Você foi reprovado seu media ficou {}'.format(media))




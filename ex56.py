soma_idade = 0
media_idade = 0
maior_idade_homem = 0
nome_velho = ''
mulher_menos20 = 0
for p in range(1, 5):
    print('--------- {}° Pessoa ---------'.format(p))
    nome = str(input('Nome: ')).strip()
    idade = int(input('Idade: '))
    sexo = str(input('Soxe F/M: ')).strip()
    soma_idade += idade
    media_idade = soma_idade / 4
    if p == 1 and sexo in 'Mm':
        maior_idade_homem = idade
        nome_velho = nome
    if sexo in 'Mm' and idade > maior_idade_homem:
        maior_idade_homem = idade
        nome_velho = nome
    if sexo in 'Ff' and idade < 20:
        mulher_menos20 += 1
print('A media entre a idade é {}'.format(media_idade))
print('O homem mais velho é o {} é a idade dele {}'.format(nome_velho, maior_idade_homem))
print('A quantide de mulheres menores que 20 anos são: {}'.format(mulher_menos20))

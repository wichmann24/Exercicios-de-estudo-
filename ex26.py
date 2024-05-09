f = str(input('Fale um frase: ')).upper()
print('A quantidade da palavra a é {}'.format(f.count('A')))
print('A primeira letra A foi encontrada nessa posição {}'.format(f.find('A')+1))
print('A ultima letra A foi encontrada nessa posição {}'.format(f.rfind('A')+1))

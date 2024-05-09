numero = int(input('Digite um numerp interiro: '))
print('''Escolha uma das bases de converção
[1] converter para binario
[2] converter para octal
[3] converter para hexadecimal''')
opçao = int(input('Qual a sua opção: '))
if opçao == 1:
    print('A converção {} para binario {}'.format(numero, bin(numero)[2:]))
elif opçao == 2:
    print('converção {} em octal é {}'.format(numero, oct(numero)[2:]))
elif opçao == 3:
    print('A conveção {} em hexadecimal é {}'.format(numero, hex(numero)[2:]))
else:
    print('Opção invalida, tente novamente')

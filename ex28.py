import random
n = int(input('Fale um numero de 0 a 5: '))
if n == random.randint(0, 5):
    print('Você acertou!')
else:
    print('Você errou o numero era {}'.format(random.randint(0, 5)))

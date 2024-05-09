ano = int(input('fale qualquer ano: '))
if ano % 4 == 0 and ano %100 != 0 or ano % 400 == 0:
    print('E um ano bissextos {}'.format(ano))
else:
     print('Não e um ano bissextos {}'.format(ano))
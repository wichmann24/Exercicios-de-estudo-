from datetime import date
atual = date.today().year
totmaior = 0
totmenor = 0
for pess in range(1, 8):
    nasc = int(input('Fale {}° ano: '.format(pess)))
    idade = atual - nasc
    if idade >= 18:
        totmaior += 1
    else:
        totmenor += 1
print('Tivemos {} de pessoas de maior'.format(totmaior))
print('Tivemos {} pessoas de menor'.format(totmenor))

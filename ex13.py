d = float(input('Quantos dias você alugou? '))
k = float(input('Quantos kms você percorreu? '))
dk = k * 0.15
dp = d * 60
r = dk + dp
print('O aluguel so seu carro ficou R${:.2f}'.format(r))

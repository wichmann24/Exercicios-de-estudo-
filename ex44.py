print('{:=^40}'.format('Loja do marco'))
preço = float(input('Fale o preço das compras: R$'))
print('''Forma de pagamento
[ 1 ] Á vista dinheiro/cheque
[ 2 ] Á vista no cartão
[ 3 ] 2x no cartão
[ 4 ] 3x ou mais no cartão: 20% de juros ''')
opçao = int(input('Qual a sua escolha: '))
if opçao == 1:
    total = preço - (preço * 10 / 100)
elif opçao == 2:
    total = preço - (preço * 5 / 100)
elif opçao == 3:
    total = preço
    parcela = preço / 2
    print('Sua compra sera parcelado em 2x de R${:.2f} SEM JUROS'.format(parcela))
elif opçao == 4:
    total = preço + (preço * 20 / 100)
    total_parcela = int(input('Quantas parcelas ? '))
    parcela = total / total_parcela
    print('Sua compra sera parcelada em {}x de R${:.2f} COM JUROS'.format(total_parcela, parcela))
print('Sua compra de {:.2f} vai custar {:.2f}'.format(preço, total))

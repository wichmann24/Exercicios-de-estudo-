valordacasa = float(input('Qual o valor da casa ? '))
salario = float(input('Qual o seu salario ? '))
anos = int(input('Em quantos anos você consegue pagar a casa ? '))
prestação = valordacasa / (anos * 12)
minimo = salario * 30 / 100
if prestação <= minimo:
    print('Emprestimo aprovado!')
else:
    print('Emprestimo negado!')

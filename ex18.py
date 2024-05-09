import math
ang = float(input('Digite um ãngulo: '))
s = math.sin(math.radians(ang))
print('O ãngulo {} é o SENO {:.2f}'.format(ang, s))
c = math.cos(math.radians(ang))
print('O ãngulo {} é o COSENO {:.2f}'.format(ang, c))
t = math.tan(math.radians(ang))
print('O ãngulo {} é a TANGENTE {:.2f}'.format(ang, t))


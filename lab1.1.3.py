import math
g = 9.81
H = int(input("введите H  "))
L = int(input("введите L  "))
alph = math.atan(4*H/L)
v = math.sqrt(g*L/math.sin(2*alph))
print("alph= ",alph)
print("v= ",v)

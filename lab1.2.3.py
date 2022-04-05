import math
n = float(input("введите границу "))
x = float(input("введите число "))
i = 1
sum = 0.0
if x < 1:
    while i <= n:
        sum+= (i+1)*math.pow(x,i)
        i+=1
else:
    print("число должно быть меньше 1 :(")
print("сумма равна ",sum)    

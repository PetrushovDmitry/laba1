import math
sum = 0.0
m = 50
fuc = 1
x = float(input("введите х  "))
for n in range(m):
    if n == 0:
        fuc = 1
    else:
        fuc = 1
        k = 2*n
        while k > 1:
            fuc*= k
            k-=1
    sum += math.pow((-1),n)*math.pow(x,(2*n))/fuc

print(sum)

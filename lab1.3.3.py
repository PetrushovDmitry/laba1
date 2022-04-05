a = int(input("колличество столбцов  "))
b = int(input("колличество строк  "))
m1 = [[0 for k in range(a)] for n in range(b)]
m2 = [[0 for k in range(len(m1))] for n in range(len(m1[0]))]
print(m1)
for n in range(a):
    for k in range(b):
        m1[k][n] = input()

for n in range(len(m1)):
    for k in range(len(m1[0])):
        m2[k][n] = m1[n][k]
print(m1)
print(m2)



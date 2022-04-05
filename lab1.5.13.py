predmin = min1 = 0.0
a = b= 0
with open("text.txt") as f:
    m = f.readline()
    while m:
        a+=1
        predmin = float(m)
        if predmin < min1:
            min1 = predmin
            b = a
    print(b)
    



a=1
b=1
for f in range(3,300000):
    c=a+b
    a=b
    b=c
    if len(str(c))==1000:
        print(f)
        break
def fak(n):
    if n == 0:
        return 1
    else:
        return n * fak(n-1)
sum2=0
for i in range(1000000):
    k=str(i)
    sum=0
    for x in k:
        s=int(x)
        sum+=fak(s)
    if(sum==i):
        print(i)
        sum2+=i
print(sum2-3)
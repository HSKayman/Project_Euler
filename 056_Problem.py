max=0
for i in range(1,100):
    for j in range(1,100):
        sum=0
        for k in str(i**j):
            sum+=int(k)
        if(sum>max):
            max=sum
print(max)
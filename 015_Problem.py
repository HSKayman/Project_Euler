sum1=1
sum2=1
for i in range(1,41):
    sum1*=i
    if(20>=i):
        sum2*=i
sum2=sum2**2
print(sum1//sum2)
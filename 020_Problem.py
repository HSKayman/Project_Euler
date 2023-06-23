c=1
s=1
while(s<=100):
    c*=s
    s+=1
sum=0
a=str(c)
for i in a:
    sum+=int(i)
print(sum)
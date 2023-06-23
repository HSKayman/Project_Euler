def is_ly(x):
    for i in range(50):
        number = x + int(str(x)[::-1])
        if str(number) == str(number)[::-1]:
            return 1
        x = number
    return 0

count=0
for i in range(10001):
    if(is_ly(i)==0):
        count+=1
print(count)
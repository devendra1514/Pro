# WAP to input any 10 different number and find minimum number.

print("Enter 10 different number to find minimun number:")
min=0
for i in range(10):
    num=int(input())
    if(i==0):
        min=num
    elif(num<min):
        min=num
print("minimun:",min)

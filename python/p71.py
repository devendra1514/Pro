# WAP to input any ten different number  and find out maximum number.

print("Enter any 10 different number:",end="")
max=0
for i in range(1,10+1):
    num=int(input())
    if(num>max):
        max=num
print("Maximum:",max)
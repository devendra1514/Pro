''' check the no is perfect or not '''

num=int(input("Enter the number:"))
sum=0
for i in range(1,num):
    if(num%i==0):
        sum=sum+i
if(sum==num):
    print(num,"is perfect number")
else:
    print(num,"is not a perfect number")
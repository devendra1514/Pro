''' sum of number in a given range.'''

num=int(input("Enter any number:"))
sum=0
for i in range(1,num+1):
    sum=sum+i
print("sum:",sum)
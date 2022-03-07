''' WAP to input 10 element in an array and print out its addition'''

print("Enter 10 different number:")
num=[]
for i in range(10):
    num.append(int(input()))
sum=0
for i in range(10):
    sum=sum+num[i]
print("Sum:",int(sum))
''' WAP to summation of this pattern:
1+1+2+1+2+3+1+2+3+4+1+2+3+4+5
'''
num=int(input("Enter any number:"))
sum=0
for i in range(1,num+1):
    for j in range(1,i+1):
        sum=sum+j
print("sum:",sum)
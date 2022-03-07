''' WAP to print and summation of given series
    1^2+2^2+3^2+4^2+5^2+.......+n term
'''
num=int(input("Enter any number:"))
sum=0
for i in range(1,num+1):
    sum=sum+i*i
print("sum:",sum)    
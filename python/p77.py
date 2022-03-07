''' WAP to print the following pattern and print its summation.
    output: 1+11+111+1111+11111
    sum: 12345
'''

num=int(input("Enter any number:"))
ptrn=0
sum=0
for i in range(num):
    ptrn=ptrn*10+1
    sum=sum+ptrn
    if(i<num-1):
        print(ptrn,end="+")
    if(i==num-1):
        print(ptrn)
print("Sum:",sum)

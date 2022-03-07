''' WAP to reverse a n number using array
    input: 12345
    output: 54321
'''
num=input("Enter number:")
sum=len(num)
for i in range(sum-1,-1,-1):
    print(num[i],end="")

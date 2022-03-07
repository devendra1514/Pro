# WAP to input any digit and print multiplication table with a table formula.

num=int(input("Enter any number:"))
print("Table of",num)
for i in range(1,10+1):
    print(num,"*",i,"=",num*i)
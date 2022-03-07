''' WAP menu reven program to following format.
    1. Area of circle
    2. Square root
    3. Table
    4. factorial
    5. exit
'''
import math
print("1. Area of circle\n2. Square root\n3. Table\n4. Factorial\n5. Exit")    
num=int(input("Enter your choice:"))
if(num==1):
    r=int(input("Enter radius of circle:"))
    area=float(r*r*3.14)
    print("Area of circle:",area)
elif(num==2):
    num=int(input("Enter any number:"))
    sqrt=math.sqrt(num)
    print("Square root:",sqrt)
elif(num==3):
    num=int(input("Enter any number:"))
    print("Table of:",num)
    for i in range(1,10+1):
        print(num*i)
elif(num==4):
    num=int(input("Enter any number:"))
    fact=1
    for i in range(1,num+1):
        fact=fact*i
    print("factorial:",fact)
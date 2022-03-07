# WAP to input any number and find out its factorial.

num=int(input("Enter any number to find factorial:"))
fact=1
for i in range(1,num+1):
    fact=fact*i
print("factorial:",fact)
# WAP to print any number and find its reverse it reverse.

num=int(input("Enter any number:"))
rev=0
a=1
while (num not=0):
    a=num%10
    rev=rev*10+a
    num=num/10
print(rev)
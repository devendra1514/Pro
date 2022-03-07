''' WAP to input any two number and print which number is greater
    using conditional (ternary) operator. '''

print("Enter any two different number")
n1=int(input("Enter first number:"));
n2=int(input("Enter second number:"));
max = n1 if n1>n2 else n2
print("largest number between",n1,"and",n2,"is",max)

#print(max(n1,n2))    this function also used to find maximum number 
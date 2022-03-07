# WAP to input any five different number and print it addition and average.
print("Enter any five different number");
print("Enter first number:",end="");
n1=int(input());
print("Enter second number:",end="");
n2=int(input());
print("Enter third number:",end="");
n3=int(input());
print("Enter fourth number:",end="");
n4=int(input());
print("Enter fifth number:",end="");
n5=int(input());
sum=int(n1+n2+n3+n4+n5);
average=float(sum/5);
print("addition=",sum);
print("average=",average);

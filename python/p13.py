#wap to swapping of two number without using third variable.
print("Enter two number for swapping");
print("Enter first number:",end="");
n1=int(input());
print("Enter second numbet:",end="");
n2=int(input());
print("After swapping the number\nnum1=",n1,"\nnum2=",n2);
n1=n1+n2;
n2=n1-n2;
n1=n1-n2;
print("Before swapping the number\nnum1=",n1,"\nnum2=",n2);
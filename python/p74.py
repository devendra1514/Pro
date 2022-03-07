# WAP to input any 10 different number & find out summation of even & odd number.

print("Enter 10 different number:")
even=0
odd=0
for i in range(10):
    num=int(input())
    if(num%2==0):
        even=even+num
    else:
        odd=odd+num
print("Sum of even number:",even)
print("Sum of odd number:",odd)
''' WAP to create an array of 1-D and input any 20 number and print
    the addition of even or odd number.'''

print("Enter 20 number:")
num=[]
odd=0
even=0
for i in range(20):
    num.append(int(input()))
    if(num[i]%2==0):
        even=even+num[i]
    else:
        odd=odd+num[i]
print("sum of even number:",even)
print("sum of odd number:",odd)
        
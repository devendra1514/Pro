""" WAP to create one D-array of 10 elenent input the element in an array & print them."""

num=[]
print("Input 10 number:")
for i in  range(10):
    num.append(input())
print("you enter this 10 number:")
for i in range(10):
    print(num[i],end=" ")
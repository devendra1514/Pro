''' WAP to create an array of 5 element and initialize within different element and character
addition of first and last number.'''

num=[]
print("Enter number:")
for i in range(5):
    num.append(int(input()))
print("Sum of first and last number is:",num[0]+num[5-1])
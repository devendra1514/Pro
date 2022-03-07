''' WAT to create of an array 10 element and find out minimum element.'''

print("Enter 10 different value:")
num=[]
for i in range(10):
    num.append(int(input()))
print("minimum:",min(num))
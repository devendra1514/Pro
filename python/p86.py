''' WAP to print the following pattern
    54321
    4321
    321
    21
    1
'''
num=int(input("Enter any number:"))
for i in range(num,0,-1):
    for j in range(i,0,-1):
        print(j,end="")
    print(end="\n")
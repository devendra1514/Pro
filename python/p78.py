''' WAP to print the following pattern:
    input=5
    *
    **
    ***
    ****
    *****
'''
num=int(input("Enter any number:"))
for i in range(num):
    for j in range(i+1):
        print("*",end="")
    print(end="\n")
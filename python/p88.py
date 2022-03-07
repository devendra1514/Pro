''' WAP to print the following pattern
input:5
    *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *
'''
num=int(input("Enter any number:"))
for i in range(1,num*2):
    if(i<=num):
        for j in range(1,i+1):
            print("*",end="")
    elif(i>num):
        for j in range(i,num*2):
            print("*",end="")
    print(end="\n")


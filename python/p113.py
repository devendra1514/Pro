''' WAP to print the following pattern
    
    *******
    *** ***
    **   **
    *     *
'''
num=int(input("Enter any number:"))
k=0
for i in range(num,0,-1):
    if(i==num):
        for j in range((num*2)-1):
            print("*",end="")
    else:
        temp=(k*2)+1
        for j in range(i):
            print("*",end="")
        for j in range(temp):
            print(" ",end="")
        for j in range(i):
            print("*",end="")
        k+=1
    print(end="\n")

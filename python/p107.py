''' WAP to print the following patter
    input=5
    output:
            *
           ***
          *****
         *******
        *********
'''

num=int(input("Enter any number:"))
for i in range(num):
    for j in range(i,num-1):
        print(" ",end="")
    for k in range((i*2)+1):
        print("*",end="")
    print(end="\n")
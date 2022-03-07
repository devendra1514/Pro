''' WAP to print the following pattern:
    input:5
    output:
            * * * * *
            *       *
            *       *
            *       *
            * * * * *
'''

num=int(input("Enter any number:"))
for i in range(num):
    if(i==0 or i==num-1):
        for j in range(num):
            print("* ",end="")
    else:
        for j in range(num):
            if(j==0 or j==num-1):
                print("* ",end="")
            else:

                print("  ",end="")
    print(end="\n")
    

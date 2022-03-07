''' WAP to print the following pattern:
     54321
     5432
     543
     54
     5
'''
num=int(input("Enter any number:"))
for i in range(1,num+1):
    for j in range(5,i-1,-1):
        print(j,end="")
    print(end="\n")
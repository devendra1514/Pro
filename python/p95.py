''' WAP to print the following pattern:
    input: 5
    5
    54
    543
    5432
    54321
'''
num=int(input("Enter any number:"))
for i in range(num,0,-1):
    for j in range(num,i-1,-1):
        print(j,end="")
    print(end="\n")

''' WAP to print the following pattern:
    1
    13
    135
    1357
    13579
    '''
num=int(input("Enter any number:"))
for i in range(1,num+1):
    k=1
    for j in range(1,i+1):
        print(k,end="")
        k+=2
    print(end="\n")

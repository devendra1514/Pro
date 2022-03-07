''' WAP to print the following pattern:
    1
    23
    456
    78910
'''
num=int(input("Enter any number:"))
k=0
for i in range(1,num+1):
    for j in range(1,i+1):
        k+=1
        print(k,end="")
    print(end="\n")
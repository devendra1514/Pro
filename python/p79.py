''' WAP to print the following pattern 
   1
   22
   333
   4444
   55555
'''
num=int(input("Enter any number:"))
for i in range(1,num+1):
    for j in range(i):
        print(i,end="")
    print(end="\n")

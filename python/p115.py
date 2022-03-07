''' WAP to print the following pattern
    input:dev3
    output:
           d
            e
             v
              3
'''
ch=input("Enter any character:")
i=0
while(i<len(ch)):
    for j in range(i):
        print(end=" ")
    print(ch[i],end="\n")
    i+=1
        
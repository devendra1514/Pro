'''WAP to print the following pattern
           1
          232
         34543
        4567654
       567898765
'''

num=int(input("Enter any number:"))
l=0
for i in range(num):
    for j in range(i,num-1):
        print(" ",end="")
    temp=int((i*2)+1)
    a=int(temp/2)
    b=temp-a
    for k in range(b):
        l+=1
        print(l,end="")
    for k in range(a):
        l-=1
        print(l,end="")
    print(end="\n")

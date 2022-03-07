# WAP to input any number & find its table upto  given an integer.

num=int(input("Enter any number:"))
for i in range(1,10+1):
    for j in range(1,num+1):
        print(i*j,end="\t")
    print(end="\n")

'''WAP to print the following pattern
   input:4
   output:-4 -3 -2 -1 0 1 2 3 4
'''
num=int(input("Enter any number:"))
if(num>0):
   for i in range(-num,num+1):
      print(i,end=" ")
else:
   for i in range(num,-num+1):
      print(i,end=" ")
# WAP to input any charater and find out it is uppercase and lower case & number and symbol.

ch=int(input("Enter any characters:"))
if(ch>=97 and ch<=122):
    print(ch,"is lower case")
elif(ch>=65 and ch<=90):
    print(ch,"is upper case")
elif(ch<=48 or ch>=57):
    print(ch,"is digit")
else:
    print(ch,"is symbol")
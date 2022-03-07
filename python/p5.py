''' calculate simple interest'''
p=float(input("Enter principle:"))

t=float(input("Enter time:"))

r=float(input("Enter rate:"))           
                      
si=float((p * t * r ) / 100)   #if you can not defind float type in this line otherwise you defind 2nd line, 4th line, 6th line  
print("Simple interest:",(si))

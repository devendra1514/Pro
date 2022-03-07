''' WAP to input price of an item and quantity of an item and to calculate net amount with given 
    condition if a quantity is greater than 100 give the discount 10% other wise nothing.'''
price=float(input("Enter price of an item:"))
quantity=float(input("Enter quantity:"))
total=float(price*quantity)  
if quantity>=100:
    dis=float(total*10/100)
else:
    dis=0
net=float(total-dis)
print("Net amount:",net)
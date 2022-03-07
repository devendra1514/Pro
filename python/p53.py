'''WAP to input quantity,quality and price of an item and give the discout by the condition if the
    quality is "a" grade and quantity is greater than 100(qnty>100) then give the discount 10% or if
    the quanlity is "a" grade but the quantity <100 then give the discount 5% but if the quality not
    "a" grase then  nothing to give complementry, finally calculate ne amount.'''

price=float(input("Enter price of an item:"))
qlty=input("Enter quanlity:")
qnty=int(input("Enter quantity:"))
total=float(price*qnty)
dis=0
if (qlty=="a" or qlty=="A"):
    if qnty>=100:
        dis=float(total*10/100)
    else:
        dis=float(total*5/100)
net=float(total-dis)
print("Net amout:",net)
''' WAP to input cost & selling price of an item and to calculate and print profit & lose if the 
    user has earn the profit also print profit value other wise print lose and also print  lose
    value.'''

cost=float(input("Enter cost price:"))
selling=float(input("Enter selling price:"))
profit=float(selling-cost)
lose=float(cost-selling)
if cost>selling:
    print("lose",lose)
else:
    print("profit",profit)
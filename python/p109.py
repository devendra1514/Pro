''' WAP to print leap year or not:
'''

year=int(input("Enter year to find leap year or not: "))
if(year%4==0):
    print(year,"is leap year")
else:
    print(year,"is not a leap year")
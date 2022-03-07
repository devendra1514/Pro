# WAP to input start number and stop number print the number to start to stop.

start=int(input("Enter start number:"))
stop=int(input("Enter stop number:"))
if start<stop:
    for i in range(start,stop+1):
        print(i)
else:
    for i in range(start,stop-1,-1):
        print(i)
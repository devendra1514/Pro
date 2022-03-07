'''wap to input basic salary of employ & to calculate HRA & DA & gross salary & net salary 
following condition HRA is 20% & DA is 10% of basic salary and 500 is tax.''' 

print("Enter basic salary of employee: ",end="");
bs=float(input());
da=float((bs*20)/100);
hra=float((bs*10)/100);
gross=float(bs+hra+da);
tax=500;
print("Basic salary       |",bs);
print("Dearness allowance |",da);
print("Home rent allowance|",hra);
print("Gross salary       |",gross);
print("Tax                |",tax);
print("Net salary         |",gross-tax);
print("\n")
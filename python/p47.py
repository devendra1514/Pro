# WAP to input your age and check you ate eligible for voting.
age=int(input("Enter your age:"))
if (age>=18 and age<=100):
    print("you are eligible for vote")
elif (age>100 or age<0):
    print("enter age is not valid")
else:
    print("you are not eligible for vote")

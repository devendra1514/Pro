''' WAP to input gender of a person & age of person & print the statement by given condition if    
   person is male & his age is greater than 18 then print person is male & he is eligible for voting.
   but person is male but age is less  than 18 then print the person is male but his not eligible 
   for voting. if but if the person is female than same is above condition.'''
   
gender=input("Enter gender of a person:")
age=int(input("Enter age of a person:"))
if(gender=="m" or gender=="M"):
   if(age>18):
      print("Person is male and he is eligible for voting")
   else:
      print("Person is male and he is not eligible for voting")
elif(gender=="f" or gender=="F"):
   if(age>18):
      print("person is female and she is eligible for voting")
   else:
      print("person is female and she is not eligible for voting")
else:
   print("this gender not valid")
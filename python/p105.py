''' WAP to print "happy" 5 times without using loop.'''

print("How many times you displey 'Happy':")
num=int(input())
for i in range(num):
    print("Happy")
    if(i>num):
        break;

from math import sqrt


num = int(input())

# it compute output in O(n) time
def findDivisorsLogN(num):
    return [i for i in range(1, num+1) if num % i == 0]


# it compute output in O(root(n)) time
def findDivisorsRootN(num):
    lst = []
    for i in range(1, int(sqrt(num))+1):
        if num % i == 0:
            lst.append(i)
            lst.append(num//2)
    return lst

print(findDivisorsLogN(num))
print(findDivisorsRootN(num))
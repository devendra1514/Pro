# You are given list of numbers, obtained by rotating a sorted list an unknown number of times.
# Write a function to determine the minimum number of times the original sorted list was 
# rotated to obtain the given list. Your function should have the worst-case complexity of 
# O(log N), where N is the length of the list. You can assume that all the numbers 
# in the list are unique.

# Example: The list [5, 6, 9, 0, 2, 3, 4] was obtained by 
# rotating the sorted list [0, 2, 3, 4, 5, 6, 9] 3 times.

# We define "rotating a list" as removing the last element of the list 
# and adding it before the first element. E.g. rotating the list [3, 2, 4, 1] produces [1, 3, 2, 4].

# "Sorted list" refers to a list where the elements are arranged in 
# the increasing order e.g. [1, 3, 5, 7].

def search(low, high, check):
    while low <= high:
        mid = (low+high)//2
        # print("Low : ",low,"High : ",high,"Mid : ",mid)
        result = check(mid)
        # print(result)
        if result == 'found':
            break
        elif result == 'left':
            high = mid - 1
        else:
            low = mid + 1
    return low
def count_rotations_generic(nums):
    start = 0
    end = len(nums)-1
    def condition(mid):
        if nums[start] <= nums[mid] <= nums[end]:
            return 'found'
        elif nums[start] <= nums[mid]:
            return 'right'
        else:
            return 'left'
    return search(start, end, condition)

tests = []
tests.append({
    'input': {
        'nums': [19, 25, 29, 3, 5, 6, 7, 9, 11, 14]
    },
    'output': 3
})
tests.append({
    'input': {
        'nums': [7,8,9,0,1,2,3,4,5,6]
    },
    'output': 3
})
tests.append({
    'input':{
        'nums':[4,5,6,7,8,1,2,3]
    },
    'output':5
})
tests.append({
    'input':{
        'nums': []
    },
    'output':0
})
tests.append({
    'input':{
        'nums': [1,2]
    },
    'output':0
})
tests.append({
    'input':{
        'nums': [1,2,3,4,5,6,7,8,9]
    },
    'output':0
})
tests.append({
    'input':{
        'nums': [2,3,4,5,6,7,8,9,1]
    },
    'output':8
})
tests.append({
    'input':{
        'nums': [9,1,2,3,4,5,6,7,8]
    },
    'output':1
})

for test in tests:
	print(count_rotations_generic(test['input']['nums']))
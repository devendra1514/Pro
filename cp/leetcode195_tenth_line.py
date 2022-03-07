file = open("file.txt")

for line in file:
    if line == "Line 10":
        print(line)
    elif line == "Line 10\n":
        print(line)
        break
fp = open('hello.text', 'r')        # w to create a file
# print(fp.read())        # fp.read(5) return first 4 character of the file
# print(fp.read(5))       # first 5 character
# print(fp.readline())    # read first line

for x in fp:              # loop through the file line by line
    print(x)

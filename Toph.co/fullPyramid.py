def fullPyramid():
    pyramidSize = int(input())
    
    # no of spaces
    space = 0
    for i in range(1, pyramidSize+1):
        for j in range(1, (pyramidSize - i)+1):
            print(end="  ")
        while space != (2*i - 1):
            print("* ", end="")
            space = space + 1
        space = 0
        print()


fullPyramid()
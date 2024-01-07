################ Interview Questions #############
# Question1
def foo(array):
    sum = 0
    product = 1
    for i in array:
        sum += i
    for i in array:
        product *= i
    print("Sum = "+str(sum)+", Product = "+str(product))


ar1 = [1, 2, 3, 4]
foo(ar1)

# Question2


def printPairs(array):
    for i in array:
        for j in array:
            print(str(i)+","+str(j))


# Question3
def printUnorderedPairs(array):
    for i in range(0, len(array)):
        for j in range(i+1, len(array)):
            print(array[i] + "," + array[j])


# Question4
def printUnorderedPairs(arrayA, arrayB):
    for i in range(len(arrayA)):
        for j in range(len(arrayB)):
            if arrayA[i] < arrayB[j]:
                print(str(arrayA[i]) + "," + str(arrayB[j]))


arrayA = [1, 2, 3, 4, 5]
arrayB = [2, 6, 7, 8]


# Question5
def printUnorderedPairs(arrayA, arrayB):
    """
    TC: O(n*m)
    """
    for i in range(len(arrayA)):            # O(n)
        for j in range(len(arrayB)):        # O(m)
            for k in range(0, 100000):       # O(1)
                print(str(arrayA[i]) + "," + str(arrayB[j]))

# printUnorderedPairss(arrayA,arrayB)


# Question6
def reverse(array):
    """
    TC: O(n)
    """
    for i in range(0, int(len(array)/2)):       # O(n/2) after removing constant O(n)
        other = len(array)-i-1
        temp = array[i]
        array[i] = array[other]
        array[other] = temp
    print(array)


reverse(arrayA)

# can't understand those things


def factors(n):                 # traditional function that computes factors
    results = []                # store factors in a new list
    for k in range(1, n+1):
        if n % k == 0:          # divides evenly, thus k is a factor
            results.append(k)   # add k to the list of factors
        return results          # return the entire list


def factor(n):                  # generator that computes factors
    for k in range(1, n+1):
        if n % k == 0:          # divides evenly, thus k is a factor
            yield k             # yield this factor as next result


def factorss(n):                # generator that computes factors
    k = 1
    while k*k < n:              # while k < sqrt(n)
        if n % k == 0:
            yield k
            yield n // k
        k += 1
    if k*k == n:                # special case if n is perfect square
        yield k


print(factorss(100))
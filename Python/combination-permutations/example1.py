"""
Combination:
This method takes a list and an input r as an input and return an object list of tuples 
which contain all possible combination of length r in a list form.

Permutations:
First import itertools package to implement the permutations method in python. 
This method takes a list as an input and returns an object list of tuples 
that contain all permutations in a list form.
"""

import itertools

word = "sample"
my_letters = "plmeas"

combinations = itertools.combinations(my_letters, 6)
comb = itertools.combinations([1, 2, 3], 2)
for c in comb:
    print(c)


permutations = itertools.permutations(my_letters, 6)

for p in permutations:
    if "".join(p) == word:
        print("Matched!")
        break
    else:
        "No match!"
# * means zero or more
# + means one or more
# ? means zero or one repetitions
# {} Curly braces can be used to represent the number of repetitions between two numbers.

import re

pattern = r"ice(-)?cream"

if re.match(pattern, "ice-cream"):
    print("Match 1")

if re.match(pattern, "icecream"):
    print("Match 2")

if re.match(pattern, "sausages"):
    print("Match 3")

if re.match(pattern, "ice--ice"):
    print("Match 4")


pattern2 = r"9{1,3}$"

if re.match(pattern, "9"):
    print("Match 1")

if re.match(pattern, "999"):
    print("Match 2")

if re.match(pattern, "9999"):
    print("Match 3")


# The content of groups in a match can be accessed using the group function.
# A call of group(0) or group() returns the whole match.
# A call of group(n), where n is greater than 0, returns the nth group from the left.
# The method groups() returns all groups up from 1.
pattern3 = r"a(bc)(de)(f(g)h)i"

match = re.match(pattern, "abcdefghijklmnop")
if match:
    print(match.group())
    print(match.group(0))
    print(match.group(1))
    print(match.group(2))
    print(match.groups())

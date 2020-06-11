import re

str = "My name is David. Hi David."
pattern = r"David"
newstr = re.sub(pattern, "Amy", str)
print(newstr)

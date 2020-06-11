# [\w\.-]+ matches one or more word character, dot or dash.
# The regex above says that the string should contain
# a word (with dots and dashes allowed), followed by the
# @ sign, then another similar word, then a dot and another word.

# Our regex contains three groups:
# 1 - first part of the email address.
# 2 - domain name without the suffix.
# 3 - the domain suffix.

# In case the string contains multiple email addresses,
# we could use the re.findall method instead of re.search,
# to extract all email addresses.
import re

pattern = r"([\w\.-]+)@([\w\.-]+)(\.[\w\.]+)"
str = "Please contact info@sololearn.com for assistance"

match = re.search(pattern, str)
if match:
    print(match.group())


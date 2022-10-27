def concate(**kwargs):
    result = ""
    for arg in kwargs.values():
        result += arg
    return result

print(concate(a="Real", b="Python", c="Is", d="Great", e="!"))
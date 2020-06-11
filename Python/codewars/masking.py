def maskify(cc):
    if len(cc) >= 4:
        cc = cc[-4:].rjust(len(cc), '#')
        # return "#"*(len(cc)-4) + cc[-4:]
        return cc
    else:
        return cc


cc = "4556364607935616"
print(maskify(cc))
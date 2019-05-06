# reply = input('Enter x & y, separated by spaces: ')
# pieces = reply.split( )         # return a list of strings, as separated by spaces
# x = float(pieces[0])
# y = float(pieces[1])
#
# print('x: {0}\ny: {1}'.format(x, y))

age = int(input('Enter your age in years: '))
max_heart_rate = 206.9 - (0.67 * age)       # as per Med Sci Sports exerc
target = 0.65 * max_heart_rate
print('Your target fat-burining heart rate is', target)
"""
ABCD
EFGH
IJKL
IMNO
QRST
UVWX
YZ
"""

import textwrap

def wrap(string, max_width):
    lst = textwrap.wrap(string, width=max_width)
    return '\n'.join(lst)

if __name__ == '__main__':
    string, max_width = 'ABCDEFGHIJKLIMNOQRSTUVWXYZ', 4
    result = wrap(string, max_width)
    print(result)
    
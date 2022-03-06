def printer_error(str):
    # return "{}/{}".format(len(sub("[a-m]",'',s)),len(s))
    return '{}/{}'.format(len([x for x in str if x not in 'abcdefghijklm']), len(str))


if __name__ == '__main__':
    # n = input()
    print(printer_error('aaaaaaabbbbbbbbbbbmmmmmmmmmmmmmxyz'))

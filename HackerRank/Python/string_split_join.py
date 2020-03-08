def split_and_join(line):
    lis = line.split()
    return '-'.join(lis)

if __name__ == "__main__":
    line = 'this is a string'
    result = split_and_join(line)
    print(result)
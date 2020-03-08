if __name__ == '__main__':
    str = 'aB3'
    print(any(s.isalnum() for s in str))
    print(any(s.isalpha() for s in str))
    print(any(s.isdigit() for s in str))
    print(any(s.islower() for s in str))
    print(any(s.isupper() for s in str))
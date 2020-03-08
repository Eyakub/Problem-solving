def count_substring(string, sub_string):
    count = 0
    for i in range(len(string)):
        if string[i:].startswith(sub_string):
            count += 1
    return count

if __name__ == '__main__':
    string = 'ABCDCDC'
    sub_string = 'CDC'
    
    count = count_substring(string, sub_string)
    print(count)
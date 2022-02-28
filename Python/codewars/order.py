# https://www.codewars.com/kata/55c45be3b2079eccff00010f/train/python

def order1(sentence):
    final_result = sentence.split()
    for i in sentence.split():
        for j in i:
            if j.isdigit():
                final_result[int(j)-1] = i
    return ' '.join(final_result)


def order(sentence):
    print('==sorted==', sorted(sentence.split(), key=lambda x: x.split()))
    return ' '.join(sorted(sentence.split(), key=lambda w:sorted(w)))


if __name__ == '__main__':
    # print(order("is2 Thi1s T4est 3a"))
    print(order("4of Fo1r pe6ople g3ood th5e the2"))
    # print(order(""))
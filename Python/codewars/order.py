# https://www.codewars.com/kata/55c45be3b2079eccff00010f/train/python

def order(sentence):
    final_result = []
    for i in sentence.split():
        min = 1
        for j in i:
            if j.isdigit():
                print(j)


if __name__ == '__main__':
    print(order("is2 Thi1s T4est 3a"))
    # print(order("4of Fo1r pe6ople g3ood th5e the2"))
    # print(order(""))
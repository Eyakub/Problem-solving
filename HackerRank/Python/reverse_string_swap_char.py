
def reverse_words_order_and_swap_cases(sentence):
    words = sentence.split()
    reversed_words = [word.swapcase() for word in words]
    result = " ".join(reversed(reversed_words))
    return result


if __name__ == '__main__':
    sentence = "Hello World"

    result = reverse_words_order_and_swap_cases(sentence)
    print(result)
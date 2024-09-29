import time
import multiprocessing

square_result = []


def calc_square(numbers):
    global square_result
    for n in numbers:
        time.sleep(0.2)
        print('square:', n*n)
        square_result.append(n*n)
    print("Within a process: ", square_result)


if __name__ == "__main__":
    arr = [2, 3, 8, 9]
    p1 = multiprocessing.Process(target=calc_square, args=(arr,))
    p1.start()
    p1.join()

    print("Result: ", square_result)
    print("Done!")

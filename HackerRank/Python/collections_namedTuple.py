from collections import namedtuple


N = int(input())
student = namedtuple('student', input().strip().split())
print(sum(float(student(*input().strip().split()).MARKS) for _ in range(N))/N)


def named_tuple1(n):
    StudentGrade = namedtuple('StudentGrade', 'ID MARKS NAME CLASS')
    result_sum = 0
    for _ in range(n):
        input_values = input().split()
        student_obj = StudentGrade(ID=input_values[0], MARKS=int(input_values[1]), NAME=input_values[2],
                                   CLASS=input_values[3])
        result_sum += student_obj.MARKS
    print("{:.2f}".format(round(result_sum/n), 2))


if __name__ == '__main__':
    n = int(input())
    named_tuple1(n)

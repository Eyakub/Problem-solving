# read the names and marks of at least 3 students
# rank the top three students with highest marks
# give cash rewards %00 for first, $300 for 2nd, $100 for 3rd
# appreciate students who secured 950 marks and above
import operator


def readStudentDetails():
    # { 'eyakub': 600, ...}
    print("Enter the number of students: ")
    numberOfStudents = int(input())

    studentRecord = dict(input().split() for _ in range(numberOfStudents))
    for key, value in studentRecord.items():
        print(key, "->", studentRecord[key])
        studentRecord[key] = int(value)
    return studentRecord


def rankStudents(studentRecord):
    print()
    sortedStudentRecord = sorted(
        studentRecord.items(), key=operator.itemgetter(1), reverse=True
    )
    # print(sortedStudentRecord)
    print(
        "{} has secured first rank, scoring {} marks".format(
            sortedStudentRecord[0][0], sortedStudentRecord[0][1]
        )
    )
    print(
        "{} has secured first rank, scoring {} marks".format(
            sortedStudentRecord[1][0], sortedStudentRecord[1][1]
        )
    )
    print(
        "{} has secured first rank, scoring {} marks".format(
            sortedStudentRecord[2][0], sortedStudentRecord[2][1]
        )
    )
    return sortedStudentRecord


def rewardStudents(sortedStudentRecord, reward):
    print()
    print(
        "{} has received a cash reward of ${}".format(
            sortedStudentRecord[0][0], reward[0]
        )
    )
    print(
        "{} has received a cash reward of ${}".format(
            sortedStudentRecord[1][0], reward[1]
        )
    )
    print(
        "{} has received a cash reward of ${}".format(
            sortedStudentRecord[2][0], reward[2]
        )
    )


def appreciateStudents(sortedStudentRecord):
    print()
    for record in sortedStudentRecord:
        if record[1] >= 950:
            print(
                "Congratulations on scoring {} marks, {}".format(record[1], record[0])
            )
        else:
            break


studentRecord = readStudentDetails()
sortedStudentRecord = rankStudents(studentRecord)

rankStudents(studentRecord)
reward = (500, 300, 100)
rewardStudents(sortedStudentRecord, reward)
appreciateStudents(sortedStudentRecord)

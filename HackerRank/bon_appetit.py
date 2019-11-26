import os


def bonAppetit(bill_arr=[3, 10, 2, 9], anna_deny=1, anna_charged=12):
    # getting the list of items bill except annay didn't eat
    except_deny_item = [x for i, x in enumerate(bill_arr) if i != anna_deny]

    actual_bill = sum(except_deny_item) / 2  # dividing the bill

    if anna_charged == int(actual_bill):
        print("Bon Appetit")
    else:
        print(int(anna_charged - actual_bill))


if __name__ == "__main__":
    inp1 = input().split(" ")
    total_item = int(inp1[0])
    anna_deny = int(inp1[1])

    bill_arr = list(map(int, input().rstrip().split()))
    anna_charged = int(input())
    bonAppetit(bill_arr, anna_deny, anna_charged)

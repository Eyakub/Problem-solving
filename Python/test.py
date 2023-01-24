def reverse(s):
    result = ""
    for i in s:
        result = i + result
        print(result)

    return result


if __name__ == "__main__":
    reverse("eyakub")
def string_to_dec(name="eyakub.me"):
    all_binary = []
    for i in range(len(name)):
        all_binary.append(bin(ord(name[i]))[::2])
    return " ".join(all_binary)

if __name__ == "__main__":
    res = string_to_dec()
    print(res)
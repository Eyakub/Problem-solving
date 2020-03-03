def characterFrequency(str):
    dicti = {}
    for i in str:
        # every time getting the keys from dict
        keys = dicti.keys()
        if i in keys:
            # if we get multiple time same keys plus 1 for the keys
            # value
            dicti[i] += 1
        else:
            # if new key as dict doesn't carry duplicate so every keys
            # will be unique and set 1 for the first time
            dicti[i] = 1
    return dicti        

if __name__ == "__main__":
    # str = input()
    str = "google.com"
    print(characterFrequency(str))

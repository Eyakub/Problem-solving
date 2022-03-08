def solution(city, temp_data):
    count = 0
    for i in temp_data:
        if i >= 20:
            count += 1
    return f"{city} has {count} warm months."


if __name__ == '__main__':
    test = input()
    city = input("CityName: ")
    temp_data = list(map(int, input("TempData: ").strip().split(',')))[:12]
    print(solution(city, temp_data))
import random

city_names = ['Paris', 'London', 'Dhaka', 'Berlin']

city_temps = {city: random.randint(20, 30) for city in city_names}
print("City temps: ", city_temps)

above_25 = {city: temps for (city, temps) in city_temps.items() if temps > 25}
print("Above 25: ", above_25)

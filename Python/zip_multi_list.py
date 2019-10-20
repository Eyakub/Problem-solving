# to work with two or more list

names = ['Peter Parker', 'Clark Kent', 'Wade Wilson', 'Bruce Wayne']
heroes = ['Spiderman', 'Superman', 'Deadpool', 'Batman']
universes = ['Marvel', 'DC', 'Marvel', 'DC']

# this is using enumerate system
for index, name in enumerate(names):
    hero = heroes[index]
    print(f'{name} is actually {hero}')


# zip for two list
print('\nThis is for zip using two list\n')
for name, hero in zip(names, heroes):
    print(f'{name} is actually {hero}')


# zip for three list
print('\nFor three list using ZIP\n')
for name, hero, universe in zip(names, heroes, universes):
    print(f'{name} is actually {hero} from {universe}')
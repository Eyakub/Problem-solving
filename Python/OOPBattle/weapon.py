class Weapon:
    def __init__(self, name, weapon_type, damage, value) -> None:
        self.name = name
        self.weapon_type = weapon_type
        self.damage = damage
        self.value = value


iron_sword = Weapon("Iron sword", "sharp", 5, 10)
short_bow = Weapon("Short Bow", "ranged", 4, 8)
fists = Weapon("Fists", "blunt", 2, 0)

from weapon import fists
from health_bar import HealthBar


class Character:
    def __init__(self, name, health) -> None:
        self.name = name
        self.health = health
        self.health_max = health

        self.weapon = fists

    def attack(self, target) -> None:
        target.health -= self.weapon.damage
        target.health = max(target.health, 0)
        target.health_bar.update()
        print(f"{self.name} dealt {self.weapon.damage} damage to "
              f"{target.name} with {self.weapon.name}")


class Hero(Character):
    def __init__(self, name, health) -> None:
        super().__init__(name, health)

        self.default_weapon = self.weapon
        self.health_bar = HealthBar(self, color="green")

    def equip(self, weapon) -> None:
        self.weapon = weapon
        print(f"{self.name} equiped a(n) {self.weapon.name}")

    def drop(self) -> None:
        print(f"{self.name} dropped the {self.weapon}!")
        self.weapon = self.default_weapon


class Enemy(Character):
    def __init__(self, name, health, weapon) -> None:
        super().__init__(name, health)
        self.weapon = weapon

        self.health_bar = HealthBar(self, color="red")

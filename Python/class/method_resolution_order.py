class Book:
    def __init__(self, title) -> None:
        self.title = title
        self.page = 1

    def read(self):
        return f"There sure are a lot of words on page {self.page}"

    def bookmark(self, page):
        self.page = page


class Novel(Book):
    pass


class Mystery(Novel):
    def read(self):
        return f"Page {self.page} and I still don't know who did it!"


class Product:
    def purchase(self):
        return "WOW, you really like it"


class BookProduct(Book, Product):
    pass


class MysteryProduct(Mystery, Product):
    def purchase(self):
        return "Who's done it?"


product1 = BookProduct("OurCodeSChool")
print(product1.purchase())


product2 = MysteryProduct("Murder on the orient express")
print(product2.purchase())

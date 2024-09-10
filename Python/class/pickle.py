import pickle


class Money:
    def __init__(self, amount, currency) -> None:
        self.amount = amount
        self.currency = currency
        self.conversion = self.get_conversions()

    def __str__(self):
        return f"{self.amount}, {self.currency}"

    def __repr__(self) -> str:
        return f"Money({self.amount}, {self.currency})"

    def __getstate__(self):
        return self.amount, self.currency

    def __setstate__(self, state):
        self.amount = state[0]
        self.amount = state[1]
        self.conversion = self.get_conversions()

    def get_conversions(self):
        return {'USD': 1, 'CAD': .95}

    def in_currency(self, currency):
        radio = self.conversion[currency] / self.conversion[self.currency]
        return Money(self.amount * radio, currency)


us_dollar = Money(250, 'USD')
pickled = pickle.dumps(us_dollar)
print("Pickled dump: ", pickled)

print("Pickled Load: ", pickle.loads(pickled))
print("US in currency: ", us_dollar.in_currency('CAD'))

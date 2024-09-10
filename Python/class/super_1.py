class A:
    def test(self):
        return 'A'


class B(A):
    def test(self):
        return 'B->' + super(B, self).test()


class C(A):
    def test(self):
        return 'C'


class D(B, C):
    pass


print(f"B().test(): {B().test()}")
print(f"C().test(): {C().test()}")
print(f"D().test(): {D().test()}")

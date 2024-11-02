import unittest
def add(a,b):
    return a+b

class MyTest(unittest.TestCase):
    def test(self):
        self.assertEqual(add(13,5),8)

unittest.main()

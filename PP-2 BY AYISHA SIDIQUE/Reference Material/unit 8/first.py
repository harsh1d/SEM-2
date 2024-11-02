import unittest
def add(a,b):
    return a+" "+b

class MyTest(unittest.TestCase):
    def test(self):
        self.assertEqual(add("ITM","SLS"),"ITM SLS")

unittest.main()

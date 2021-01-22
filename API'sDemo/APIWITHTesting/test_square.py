import math


def test_sqrt():
    num = 25
    assert math.sqrt(num) == 5    # passed


def testsquare():
    assert 7 * 7 == 40   # failed


def testquality():
    assert  10 == 12    # failed


def test_greater():
    num = 100
    assert num > 100   # failed


def test_greater_eqaul():
    num = 100
    assert num >= 100     # success


def test_less():
    num = 100
    assert num < 200      # success


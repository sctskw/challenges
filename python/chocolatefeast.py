#!/usr/bin/python
"""
    Chocolate Feast Challenge
    https://www.hackerrank.com/challenges/chocolate-feast

"""

import sys
import math

def clean(value):
    """clean up string value"""
    return value.strip().lower().split(' ')

def do_count(have, cost):
    """how many can be purchased initially"""
    return math.floor(int(have)/int(cost))

def do_total(initial, factor):
    """handle total amount of chocolates"""
    total = int(initial)
    remainder = (int(initial)/int(factor))

    while remainder >= 1:
        total += remainder
        remainder = (remainder/int(factor))

    return int(math.floor(total))

def run():
    """initialize challenge"""

    lines = sys.stdin.readlines()[1:]

    for line in map(clean, lines):
        money, cost, rebate = line
        print do_total(do_count(money, cost), rebate)

if __name__ == "__main__":
    run()

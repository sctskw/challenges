#!/usr/bin/python

import sys

lines = sys.stdin.readlines()

first = lines[0]
widths = lines[1]
tests = lines[2:]

def strlit(line):
    return map(int, line.strip().split(' '))

length, t = strlit(first)
widths = strlit(widths)

for test in tests:
    i,j = strlit(test)
    segs = widths[i:j+1]
    print min(segs)



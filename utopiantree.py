#!/usr/bin/python

import sys

DEBUG = False

def debug(value):
    if DEBUG:
        print value

def do_height(cycle, height):
    if not cycle & 1: # -or- cycle % 2 == 0: even number
        debug('Height increased 1 meter')
        return int(height + 1)
    else:
        debug('Height (%s) doubled in size' % height)
        return int(height * 2)

def do_cycles(cycles):
    height = 1
    if cycles > 0:
        for x in xrange(1, cycles+1):
            height = do_height(x, int(height))
            debug('Cycle %s: %s' % (x, height))

    return height

def run(values):
        for value in values:
            print do_cycles(int(value.strip()))

if __name__ == "__main__":
    run(sys.stdin.readlines()[1:])

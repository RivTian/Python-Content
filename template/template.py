#!/usr/bin/python3
import sys
import os
import time
from functools import reduce
from math import *

LOCAL = not __debug__  # True if compile option '-O'


def main():
    pass


if __name__ == "__main__":
    T1 = time.time()
    if LOCAL:
        sys.stdin = open(r"hack.txt", "r")
        sys.stdout = open(r"hack.out", "w")
    t = int(input())  # 1
    for i in range(t):
        print(f"Case #{i+1}:", end=' ')
        main()
    T2 = time.time()
    print("Runtime: %.3f s." % (T2 - T1), file=sys.stderr)

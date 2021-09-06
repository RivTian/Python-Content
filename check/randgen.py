import sys
from random import *

seed(12345)
sys.stdout = open(r'../hack.txt', 'w')

n = int(1e2)
print(n)
for i in range(n):
    a = randint(-1e9, 1e9)
    b = randint(-1e9, 1e9)
    print(a, b)

#!/bin/python3

import sys


n = int(input().strip())
count = 0
while (n!=0):
    n = (n &(n << 1))
    count = count +1

print(count)

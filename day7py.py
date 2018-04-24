import sys


n = int(input())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]
arr.reverse()
print(' '.join(map(str,arr)))

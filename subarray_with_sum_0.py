from collections import deque, Counter, defaultdict
from itertools import combinations, permutations, product
import heapq
import bisect
import math
from functools import partial, lru_cache
import operator
import re
import sys
sys.stdin = open('input.txt', 'r')
sys.stdout = open('output.txt', 'w')


arr=[ 3, 4, -7, 3, 1, 3, 1, -4, -2, -2]

s=set()
s.add(0)
total=0

def solve(arr):
    for i in arr:
        total+=i

        if total in s:
            return True
        s.add(total)

    return False
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
T = int(input())
for _ in range(T):
    n = int(input())
    max_area = 0

    for a in range(n//2+1):
        b = (n//2) - a
        if b > 0:
            max_area = max(max_area, a*b)
    
    print(max_area)
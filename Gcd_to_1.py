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
    n,m = map(int, input().split())

    result = [[0 for _ in range(m)] for _ in range(n)]


    row_factor = [i+2 for i in range(n)]
    col_factor = [i+n+3 for i in range(m)]

    for i in range(n):
        for j in range(m):
            result[i][j] = row_factor[i] + col_factor[j]
    
    for row in result:
        print(' '.join(map(str, row)))
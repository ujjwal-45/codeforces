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


    for i in range(n):
        for j in range(m):
            result[i][j] = 2
    
    if n > m:
        for i in range(m):
            result[i][i] = 3
        for i in range(m,n):
            result[i][0] = 3
    else:
        for i in range(n):
            result[i][i] = 3
        for i in range(n,m):
            result[0][i] = 3
    
    for row in result:
        print(' '.join(map(str, row)))
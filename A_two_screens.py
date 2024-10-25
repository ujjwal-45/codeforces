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
    s = str(input())
    t =str(input())
    n,m = len(s), len(t)

    
    l = 0
    for i in range(1, min(n, m) + 1):
        if s[:i] == t[:i]:
            l = i
    
    ans = n+m + 1 - max(l,1)

    print(ans)
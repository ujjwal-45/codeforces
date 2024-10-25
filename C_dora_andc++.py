from collections import deque, Counter, defaultdict
from itertools import combinations, permutations, product
import heapq
import bisect
import math
from functools import partial, lru_cache
import operator
import re
# import sys
# sys.stdin = open('input.txt', 'r')
# sys.stdout = open('output.txt', 'w')
T = int(input())
for _ in range(T):
    n,a,b = map(int,input().split())
    c = list(map(int,input().split()))
    d = math.gcd(a,b)

    c = [ele % d for ele in c]
    c.sort()

    ans = c[n-1] - c[0]

    for i in range(n):
        ans = min(ans, c[i-1] + d - c[i])
    
    print(ans)

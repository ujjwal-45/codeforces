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


def solve():
    s=[int(x) for x in list(input())]
    n=len(s)
    
    for i in range(1,n):
        j = i
        while j >= 1 and s[j] > 0 and s[j]-1 > s[j-1]:
            s[j],s[j-1] = s[j-1], s[j] - 1
            if j > 1:
                j-=1
            else:
                break
    
    res = ''.join(map(str, s))
    print(res)

T = int(input())
for _ in range(T):
    solve()
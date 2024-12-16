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
    s = input()
    t = input()

    
    ones_s,ones_t = 0,0
    for i in range(n):
        if s[i] == '1':
            ones_s+=1
        if t[i] == '1':
            ones_t+=1
    
    res = "YES" if (ones_s+ones_t) % 2 == 0 else "NO"

    print(res)
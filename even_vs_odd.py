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

    f,g = 0,0
    for i in range(1,n+1):
        if n % i == 0 and i % 2 == 0:
            f+=1
        elif n %i==0 and i%2==1:
            g+=1
    
    if f == g:
        print(0)
    elif f > g:
        print(1)
    else:
        print(-1)


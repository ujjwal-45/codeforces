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

    if n % 2 == 0:
        print(-1)
        continue

    a1,a2=[],[]
    for i in range(1, n+1):
        if i % 2 == 0:
            a1.append(i)
        else:
            a2.append(i)
    
    a1.sort(reverse=True)
    
    res = [0]*n

    j,k=0,0

    for i in range(n):
        if i % 2 == 0:
            res[i] = a2[k]
            k+=1
        else:
            res[i] = a1[j]
            j+=1
    

    print(" ".join(map(str, res)))
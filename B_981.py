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
    arr = []
    for i in range(n):
        row = list(map(int,input().split()))
        arr.append(row)

    ans = 0
    diagonal = {}
    
    for i in range(n):
        for j in range(n):
            if arr[i][j] < 0:
                d= i-j
                if d not in diagonal:
                    diagonal[d] = arr[i][j]
                else:
                    diagonal[d]=min(diagonal[d], arr[i][j])
    
    for val in diagonal.values():
        ans+=abs(val)
    
    print(ans)

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

def solve(p):
    n = len(p)
    vis = [False]*n

    def cycle_len(start):
        length = 0
        curr = start
        while not vis[curr]:
            vis[curr]=True
            curr=p[curr]-1 # adjusted for 1-based indexing
            length+=1
        return length
    ans =0
    
    for i in range(n):
        if not vis[i]:
            cycle_length = cycle_len(i)
            if cycle_length > 1:
                if cycle_length > 2:
                    ans+= (cycle_length - 1) // 2
    return ans

T = int(input())
for _ in range(T):
    n = int(input())
    p = list(map(int,input().split()))

    ans=solve(p)

    print(ans)

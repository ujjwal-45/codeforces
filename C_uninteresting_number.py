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

# def digital_root(n):
#     if n == 0:
#         return 0
#     return 1 + (n-1)%9

def solve():
    S = [int(x) for x in list(input())]

    Sum = sum(S)
    twos = S.count(2)
    threes = S.count(3)

    
    for i in range(min(10, twos+1)):
        for j in range(min(10, threes + 1)):
            if (Sum + i * 2 + j * 6) % 9 == 0:
                print("YES")
                return

    print("NO") 

T = int(input())
for _ in range(T):
    solve()

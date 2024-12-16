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
    n,k,p = map(int,input().split())
    a = list(map(int,input().split()))

    # p->varun, k -> ved

    maxi = max(a)
    ved_height = k + maxi
    varun_height = p + sum(a) - maxi

    if varun_height > ved_height:
        print("Varun")
    elif ved_height > varun_height:
        print("Ved")
    elif varun_height == ved_height:
        print("Equal")
        
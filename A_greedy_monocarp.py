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

    n,k = map(int,input().split())
    arr=list(map(int,input().split()))
    arr.sort(reverse=True)

    Sum=0

    for i in range(n):
        if Sum + arr[i] <= k:
            Sum=Sum+arr[i]
        else:
            break

    print(k-Sum)
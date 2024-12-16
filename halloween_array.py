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
    n,l,r = map(int,input().split())
    a = list(map(int, input().split()))
    mod =10**9+7

    result = 1
    for i in range(n):
        for j in range(i+1,n):
            Xor_product = a[i] ^ a[j]
            result *= Xor_product

    if l <= result <= r:
        print("YES")
    else:
        print("NO")
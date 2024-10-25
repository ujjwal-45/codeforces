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
    a = list(map(int, input().split()))

    a.sort(reverse=True)
    print(a[(n-1)//2])
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
    s = str(input())

    max_len = 0
    for i in range(n):
        if s[i] == s[0]:
            max_len=max(max_len,i+1)
        if s[i] == s[n-1]:
            max_len = max(max_len,n-i)
    
    
    print(max_len)
    

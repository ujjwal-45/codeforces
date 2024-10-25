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
    a = list(map(int,input().split()))

    prefix_sum_index = {}
    max_segments = []
    prefix_sum = 0

    prefix_sum_index[0] = -1

    last_index = -1
    count_0 = 0

    for j in range(n):
        prefix_sum += a[j]

        if prefix_sum in prefix_sum_index:
            l = prefix_sum_index[prefix_sum]

            if l > last_index:
                max_segments.append((l+1, j))
                last_index = j
        
        prefix_sum_index[prefix_sum] = j
    
    print(len(max_segments))


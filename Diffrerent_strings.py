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
    num_set = set()
    for i in range(n):
        b_num=str(input())
        num_set.add(int(b_num,2))
    
    mex=1
    while mex in num_set:
        mex+=1
    
    ans = format(mex,'b').zfill(n)
    print(ans)
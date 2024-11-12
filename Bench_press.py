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
    n,W,Wr = map(int,input().split())
    w = list(map(int,input().split()))

    if Wr >= W:
        print("YES")
        continue

    left,right=0,0
    rem=W-Wr
    freq=Counter(w)
    for weight,count in freq.items():
        if count>=2:
            rem-=(count//2)*2*weight
            if rem<=0:
                print("YES")
                break
    
    else:
        print("NO")
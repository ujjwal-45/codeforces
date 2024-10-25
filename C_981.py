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

def disturbance(a):
    n = len(a)
    d = 0
    for j in range(n-1):
        if a[j] == a[j+1]:
            d+=1
    
    return d

T = int(input())
for _ in range(T):
    n = int(input())
    a = list(map(int,input().split()))
    
    initial_d = disturbance(a)
    freq={}
    for val in a:
        if val in freq:
            freq[val]+=1
        else:
            freq[val] = 1
    
    min_d = initial_d

    for i in range(n//2):
        if a[i] != a[n-i-1]:
            new_a = a[:]
            new_a[i],new_a[n-i-1] = new_a[n-i-1], new_a[i]

            new_d = disturbance(new_a)

            min_d = min(min_d, new_d)
    
    print(new_d)

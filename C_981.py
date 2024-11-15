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
    
    ans = 0
    for i in range(1,n//2):
        if a[i]==a[i-1] or a[n-i] ==a[n-i-1]:
            a[i],a[n-i-1] = a[n-i-1],a[i]
    
    for i in range(n-1):
        if a[i] == a[i+1]:
            ans+=1

    
    print(ans)

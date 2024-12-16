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


def solve(a):
    n=len(a)
    Sum_even,Sum_odd=0,0
    
    for i in range(n):
        if(i&1):
            Sum_odd+=a[i]
        else:
            Sum_even+=a[i]
    
    ce,co=n//2,n//2
    if(n&1):
        ce+=1
    
    if Sum_odd%co != 0 or Sum_even % ce != 0 or Sum_odd//co != Sum_even//ce:
        return "NO"
    else:
        return "YES"
    


T = int(input())
for _ in range(T):
    n=int(input())
    a=list(map(int,input().split()))

    res=solve(a)
    print(res)
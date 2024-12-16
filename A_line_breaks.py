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
    n,m=map(int,input().split())
    words=[]
    for _ in range(n):
        word=input()
        words.append(len(word))

    x=0
    for i in range(len(words)):
        if words[i] <= m:
            x+=1
            m-=words[i]
        else:
            break
    
    print(x)
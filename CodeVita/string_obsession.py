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


n=int(input())
substrings=input().strip().split()
mainString=input().strip()

ans=1
for sub in substrings:
    if sub in mainString:
        mainString=mainString.replace(sub,"",1)
        ans+=1

print(ans)
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
    n=int(input())
    row1=list(map(int,input().split()))
    row2=list(map(int,input().split()))
    matrix=[row1,row2]

    max_col_val=[max(matrix[0][i], matrix[1][i]) for i in range(n)]
    max_col=[(matrix[0][i]+matrix[1][i]) for i in range(n)]

    sum_max_col_val=sum(max_col_val)

    ans=-10**19
    for i in range(n):
        ans=max(ans,sum_max_col_val+max_col[i]-max_col_val[i])

    print(ans)
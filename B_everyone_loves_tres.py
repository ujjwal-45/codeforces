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

    if n == 1 or n == 3:
        print("-1")
    elif n % 2 == 0:
        print("3" * (n - 2) + "66")
    else:
        if n >= 5:
            print("3" * (n - 5) + "36366")
        else:
            print("-1")
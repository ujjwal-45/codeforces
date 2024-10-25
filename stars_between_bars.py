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

s = str(input())
startIndex = list(map(int, input().split()))
endIndex = list(map(int, input().split()))
indices = list(zip(startIndex,endIndex))
result = []

count=0
to_count_char = '*'

for start, end in indices:
    substring = s[start:end+1]
    first_bar = substring.find('|') # finding occurences of first and last bar
    last_bar = substring.rfind('|')

    if first_bar == -1 or last_bar == -1 or first_bar == last_bar: # if not two bars then ans is 0
        result.append(0)
    else:
        count = substring[first_bar+1:last_bar].count(to_count_char)
        result.append(count)

print(result)
        

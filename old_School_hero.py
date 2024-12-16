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

    

def min_operations_to_make_equal(arr):
    n = len(arr)
    queue = deque([(arr, 0)])  # (current array, operations count)
    visited = set()
    visited.add(tuple(arr))  # Mark the initial array as visited

    while queue:
        current, steps = queue.popleft()

        # Check if all elements are equal
        if len(set(current)) == 1:
            return steps

        # Generate all possible next states
        for i in range(n):  # Exclude one element at a time
            for x in [1, 2, 5]:  # Possible operations
                next_state = current[:]
                for j in range(n):
                    if j != i:  # Add x to all elements except index i
                        next_state[j] += x

                # If the state hasn't been visited, add it to the queue
                next_tuple = tuple(next_state)
                if next_tuple not in visited:
                    visited.add(next_tuple)
                    queue.append((next_state, steps + 1))

    return -1  # Should never reach here if the input is valid

# Example usage
arr = [2, 2, 3, 7]
print(min_operations_to_make_equal(arr))  # Output: 2

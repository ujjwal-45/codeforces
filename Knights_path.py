from collections import deque, Counter, defaultdict
from itertools import combinations, permutations, product
import heapq
import bisect
import math
from functools import partial, lru_cache
import operator
import re
# import sys
# sys.stdin = open('input.txt', 'r')
# sys.stdout = open('output.txt', 'w')

n = 8

# knight-> (i+2, j+1) or (i+1, j+2)
# bishop -> moves diagonally(i+1,j+1) or (i-1)(j-1)

startRow = 4

startCol = 2

endRow = 2

endCol = 6

bishopRow = 2

bishopCol = 3


knight_moves = [(2, 1), (2, -1), (-2, 1), (-2, -1),(1, 2), (1, -2), (-1, 2), (-1, -2)]

def get_bishop_positions(n,bishop_row,bishop_col):
    threatened = set()

    for d_row,d_col in [(-1,1),(-1,-1),(1,1),(1,-1)]:
        row,col = bishop_row,bishop_col
        while 0<=row<n and 0<=col<n:
            threatened.add((row,col))
            row+=d_row
            col+=d_col
    
    return threatened

def Moves(n,start_row,start_col,end_row,end_col,bishop_row,bishop_col):
    bishop_th = get_bishop_positions(n,bishop_row,bishop_col)

    queue = deque([(start_row,start_col,False,0)])
    visited = set([(start_row,start_col,False)])

    while queue:
        row,col,cp_b,moves = queue.popleft()

        if row == end_row and col == end_col:
            return moves
        
        for d_row,d_col in knight_moves:
            new_r,new_c = row+d_row,col+d_col

            if 0 <= new_r<n and 0<=new_c<n:
                new_cp_b = cp_b

            if (new_c,new_r) == (bishop_row,bishop_col):
                new_cp_b = True
            
            if not new_cp_b and (new_r,new_c) in bishop_th:
                continue
            
            if (new_r,new_c,new_cp_b) not in visited:
                visited.add((new_r,new_c,new_cp_b))
                queue.append((new_r,new_c,new_cp_b,moves+1))
        
    return -1

result = Moves(n,startRow,startCol,endRow,endCol,bishopRow,bishopCol)
print(result)
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

words = list(map(str, input().split()))
target = input().strip()

class TrieNode:
    def __init__(self):
        self.children = {}
        self.is_end_of_word = False

class Trie:
    def __init__(self):
        self.root = TrieNode()

    def insert(self,word):
        print(f"Inserting: {word}")
        node = self.root
        for char in word:
            if char not in node.children:
                node.children[char] = TrieNode()
            node = node.children[char]
        node.is_end_of_word = True
    
    def search(self,s,start):
        node = self.root
        prefixes = []

        for i in range(start,len(s)):
            if s[i] not in node.children:
                break
            node = node.children[s[i]]
            if node.is_end_of_word:
                prefixes.append(i+1)
        print(f"Searching from index {start}: Found valid prefixes -> {prefixes}")
        return prefixes

class Solution:
    def minValidStrings(self, words: list[str], target: str) -> int:
        trie = Trie()
        for word in words:
            trie.insert(word)

        n = len(target)
        dp = [float('inf')] * (n+1)
        dp[0] = 0

        for i in range(n):
            if dp[i] == float('inf'):
                continue
            
            valid_prefix = trie.search(target,i)
            for end in valid_prefix:
                dp[end] = min(dp[end], dp[i] + 1)
        
        return dp[n] if dp[n] != float('inf') else -1

solution = Solution()
result = solution.minValidStrings(words, target)
print(result)  
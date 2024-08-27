import sys

sys.stdin = open('input.txt', 'r')
sys.stdout = open('output.txt', 'w')

n, q = map(int, input().split())

if n % q == 0:
    print("YES")
else:
    print("NO")


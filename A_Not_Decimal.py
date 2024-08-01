import math

k = float(input())

p = int(k * 1e9)
q = int(1e9)

gcd = math.gcd(p, q)
p //= gcd
q //= gcd

if 1 <= q <= 10**9:
    print("YES")
    print(p, q)
else:
    print("NO")
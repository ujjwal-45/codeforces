import sys
sys.stdin = open('input.txt', 'r')
sys.stdout = open('output.txt', 'w')

t = int(input())


for _ in range(t):
    n,m,k = map(int,input().split())
    w = int(input())
    h = list(map(int, input().split()))

    h = sorted(h,reverse=True)
    grid = [[0] * m for _ in range(n)]
    results = []

    idx = 0
    for i in range(n):
        for j in range(m):
            if idx < w:
                grid[i][j] = h[idx]
                idx+=1

    max_spectacle= 0
    for i in range(n-k+1):
        for j in range(m-k+1):
            sum_spectacle = 0
            for x in range(k):
                for y in range(k):
                    sum_spectacle+=grid[i+x][j+y]
            max_spectacle=max(max_spectacle,sum_spectacle)

    results.append(max_spectacle)

    for result in results:
        print(result)
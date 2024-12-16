from collections import deque
import sys
sys.stdin = open('input.txt', 'r')
sys.stdout = open('output.txt', 'w')
def solve():
    n = int(input())
    if n == 1:
        print(0)
        return
    
    wells = []
    for _ in range(n):
        x, y = map(int, input().split())
        wells.append((x, y))
    
    queue = deque()
    vis = {}
    parent = {}
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    for i, (x, y) in enumerate(wells):
        queue.append((x, y, 0))  # (x, y, time)
        vis[(x, y)] = i
        parent[i] = i

    # Union-Find helpers
    def find(p):
        if parent[p] != p:
            parent[p] = find(parent[p])
        return parent[p]

    def union(p1, p2):
        root1 = find(p1)
        root2 = find(p2)
        if root1 != root2:
            parent[root2] = root1
    
    # multisource bfs
    connected_count = n
    while queue:
        x, y, time = queue.popleft()
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if (nx, ny) not in vis:
                vis[(nx, ny)] = vis[(x, y)]
                queue.append((nx, ny, time + 1))
            else:
                # Check if two wells are being connected
                if find(vis[(x, y)]) != find(vis[(nx, ny)]):
                    union(vis[(x, y)], vis[(nx, ny)])
                    connected_count -= 1
                    if connected_count == 1:
                        print(time + 1)
                        return

T = int(input())
for _ in range(T):
    solve()

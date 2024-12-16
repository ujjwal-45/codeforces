n = 4
k = 3
arr = [0]*n
ops = [[1, 3, 2], [2, 4, 4], [1, 4, 6]]
        
for i in range(k):
    L,R,X = ops[i][0], ops[i][1], ops[i][2]
    L-=1
        
    for i in range(L, R):
        arr[i] = arr[i] ^ X

print(arr)
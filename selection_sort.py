arr=[5,4,9,8,7,7,1,2]

n=len(arr)

for i in range(n):
    min_indx=i
    for j in range(i+1,n):
        if arr[j]<arr[min_indx]:
            min_indx=j
        arr[i],arr[min_indx]=arr[min_indx],arr[i]

print(arr)
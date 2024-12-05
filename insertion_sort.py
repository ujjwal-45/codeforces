arr=[5,4,9,8,7,7,1,2]

n=len(arr)

for i in range(1,len(arr)):
    key=arr[i]
    j=i-1

    while j>=0 and key<arr[j]:
        arr[j+1]=arr[j]
        j-=1
    arr[j+1]=key

print(arr)
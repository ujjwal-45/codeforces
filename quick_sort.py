def quick_Sort(arr):
    if len(arr)<=1:
        return arr
    
    pivot=arr[len(arr)//2]

    left=[x for x in arr if x<pivot]
    middle=[x for x in arr if x==pivot]
    right=[x for x in arr if x>pivot]

    return quick_Sort(left)+ middle +quick_Sort(right)

arr=[5,4,9,8,7,7,1,2]
result = quick_Sort(arr)
print(result)

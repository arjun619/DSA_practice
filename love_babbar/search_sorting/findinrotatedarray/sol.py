def finder(arr,low,high,x):
    while low<=high:
        mid= (low+high)//2
        if arr[mid]==x:
            return mid
        elif arr[mid]>x:
            if arr[low]>x:
                #finder(arr,mid+1,high,x)
                low=mid+1
            else:
                #finder(arr,low,mid-1,x)
                high=mid
        else:
            if arr[high]>=x:
                #finder(arr,mid+1,high,x)
                low=mid+1
            else:
                #finder(arr,low,mid-1,x)
                high=mid
    return -1

a=[4,5,6,7,1,2,3]
print(finder(a,0,len(a)-1,3))
            
            
            
    


    def thief(arr,flag,n,sums):
        if n==0:
            if flag==0:
                return sums+arr[n]
            else:
                return sums
        else:
            if flag==1:
                return thief(arr,0,n-1,sums)
            else:
                return max(thief(arr,1,n-1,sums+arr[n]),thief(arr,0,n-1,sums))
        
arr=[1,2,3]
print(thief(arr,0,2 ,0))

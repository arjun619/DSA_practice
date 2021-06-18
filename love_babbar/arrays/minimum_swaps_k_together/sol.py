import sys
def minSwap (arr, n, k) : 
    #Complete the function
    cnt=0
    for i in arr:
        if i<=k:
            cnt+=1
    
    temp=0
    i=0
    j=cnt
    bad=0
    for s in range(i,j):
        if arr[s]>k:
            bad+=1
    #print(cnt)
    minswaps=bad
    i=1
    j=cnt
    #print
    #print(minswaps)
    while j<n:
        if arr[i-1]>k:
            bad-=1
        if arr[j]>k:
            bad+=1
        if bad<minswaps:
            #print(i,j)
            #print(bad)
            minswaps=bad
        i+=1
        j+=1
    return minswaps

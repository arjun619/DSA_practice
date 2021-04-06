def longest_palindrome(arr):
    n=len(arr)
    dp=[[0]*n for i in range(n)]
    for i in range(len(arr)):
        dp[i][i]=1
    for i in range(len(arr)-1):
        if arr[i]==arr[i+1]:
            dp[i][i+1]=1
    
    k=3
    maxer=-1
    while k<=n:
        i=0
        while i<n-k+1:
            j= i+k-1
            if arr[i]==arr[j] and dp[i+1][j-1]==1:
                dp[i][j]=1
                if j-i+1>maxer:
                    maxer=j-i+1
            i+=1
        k+=1
                
        
    """for i in range(n-1):
        for j in range(i,n):
            if arr[i]==arr[j]:
                if dp[i+1][j-1]==1:
                    dp[i][j]=1"""
    for i in dp:
        print(i)
    
    
    print(maxer)
    
longest_palindrome("zabccba")

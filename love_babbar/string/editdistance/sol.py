def editDistance(s,t):
    m=len(s)
    n=len(t)
    dp=[[0]*(n+1) for i in range(m+1)]
    
    for i in range(m+1):
        for j in range(n+1):
            if i==0:
                dp[i][j]=j
            elif j==0:
                dp[i][j]=i
            elif s[i-1]==t[j-1]:
                dp[i][j]=dp[i-1][j-1]
            else:
                dp[i][j]=1+ min(dp[i-1][j],dp[i][j-1],dp[i-1][j-1])
                
                
        
    
    for i in dp:
        print(i)
    return dp[m][n]
    
    
print(f"minimum operations needed are", editDistance("hello","four"))  

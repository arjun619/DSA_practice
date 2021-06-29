class Solution:
    # Your task is to complete this function
    # Function should return an integer
    def countPs(self,string):
        n=len(string)
        dp=[[0]*n for _ in range(n)]
        for i in range(n):
            dp[i][i]=1
        for i in range(0,n-1):
            if string[i+1]==string[i]:
                dp[i][i+1]=3
            else:
                dp[i][i+1]=2
        # for i in dp:
        #     print(i)
        for i in range(2,n):
            lim=n-i
            k=i
            x=0
            while x<lim and k<n:
                if string[x]==string[k]:
                    dp[x][k]=dp[x][k-1]+dp[x+1][k]+1
                else:
                    dp[x][k]= dp[x][k-1]+dp[x+1][k] - dp[x+1][k-1]
                k+=1
                x+=1
            # for i in dp:
            #     print(i)
        return dp[0][n-1]%1000000007

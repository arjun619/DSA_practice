int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here
        int dp[n+1][m+1];
        for(int i=0;i<n+1;i++)dp[i][0]=0;
        for(int i=0;i<m+1;i++)dp[0][i]=0;
        
        int res=0;
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if (S1[i-1]==S2[j-1])
                    {
                        dp[i][j]=dp[i-1][j-1]+1;
                        res=max(dp[i][j],res);
                    }
                else
                    dp[i][j]=0;
            }
        }
        return res;
    }

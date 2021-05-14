int equalPartition(int N, int arr[])
    {
        // code here
        int sums=0;
        for(int i=0;i<N;i++)sums+=arr[i];
        if (sums%2==1)
            return 0;
        sums=sums/2;
        bool dp[N+1][sums+1];
        for(int i=0;i<N+1;i++)dp[i][0]=1;
        for(int i=0;i<sums+1;i++)dp[0][i]=0;
        dp[0][0]=1;
        for(int i=1;i<N+1;i++)
        {
            for(int j=1;j<sums+1;j++)
            {
                if (arr[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
                    
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        /*for(int i=0;i<N+1;i++)
        {
            for(int j=0;j<sums+1;j++)
            cout<<dp[i][j]<<" ";
            cout<<"\n";
        }*/
        return dp[N][sums];
    }

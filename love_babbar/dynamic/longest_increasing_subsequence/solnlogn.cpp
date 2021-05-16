int longestSubsequence(int n, int a[])
    {
       int dp[n+1];
       for(int i=0;i<n+1;i++)dp[i]=INT_MAX;
       dp[0]=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int index=upper_bound(dp,dp+n+1,a[i])-dp;
            if (dp[index]>a[i] && dp[index-1]<a[i])
            dp[index]=a[i];
        }
        int res=1;
        for(int i=n;i>-1;i--)
        {
            if (dp[i]!=INT_MAX)
            {
                //cout<<"hehe";
                res=i;
                break;
            }
        }
       /* for(int i=0;i<n+1;i++)cout<<dp[i]<<" ";
        cout<<"\n";*/
      return res;

int longestSubsequence(int n, int a[])
    {
       // your code here
       int dp[n]={1};
       //dp[0]=1;
       /*for(int i=0;i<n;i++)cout<<dp[i]<<" ";
       cout<<"\n";*/
       int maxer=-1;
       for(int i=1;i<n;i++)
       {
           dp[i]=1;
           int temp=1;
           int flag=0;
           for(int j=0;j<i;j++)
           {
               if (a[i]>a[j] && dp[j]+1>dp[i])
               {
                   dp[i]=dp[j]+1;
               }
           }
          
       }
      /* for(int i=0;i<n;i++)cout<<dp[i]<<" ";
       cout<<"\n";*/
      return *max_element(dp,dp+n);
      
      /* for(int i=0;i<n;i++)cout<<dp[i]<<" ";
       cout<<"\n";*/
       //return dp[n-1];
       //return maxer;
       
    }

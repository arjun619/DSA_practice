int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    int dp[n];
	    for(int i=0;i<n;i++)dp[i]=arr[i];
	    for(int i=1;i<n;i++)
	    {
	        for(int j=0;j<i;j++)
	        {
	            if (arr[i]>arr[j])
	                {
	                    if (arr[i]+dp[j]>dp[i])
	                        dp[i]=arr[i]+dp[j];
	                        
	                }
	        }
	    }
	    /*for(int i=0;i<n;i++)cout<<dp[i]<<" ";
	    cout<<"\n";*/
	    int maxer=-1;
	    for(int i=0;i<n;i++)
	    {
	        if (maxer<dp[i])
	            maxer=dp[i];
	    }
	    return maxer;
	    
	}  

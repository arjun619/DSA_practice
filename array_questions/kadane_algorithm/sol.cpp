int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int curr_max=arr[0];
    int maxs=arr[0];
    for(int i=1;i<n;i++)
    {
        curr_max=max(arr[i],arr[i]+curr_max);
        if (curr_max>maxs)
            maxs=curr_max;
    }
    return maxs;
}

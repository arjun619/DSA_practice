bool findPair(int arr[], int size, int n){
    //code
    int i=0,j=1;
    sort(arr,arr+size);
    while (j<size)
    {
        if (arr[j]-arr[i]==n)
            return true;
        if (arr[j]-arr[i]<n)
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    return false;
    

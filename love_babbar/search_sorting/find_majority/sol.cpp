int majorityElement(int a[], int size)
{
    // your code here
    int arr[1000000+2]={0};
    int k=size/2;
    for(int i=0;i<size;i++)
    {
        arr[a[i]]++;
        if (arr[a[i]]>k)
            return a[i];
    }
    return -1;
        
}

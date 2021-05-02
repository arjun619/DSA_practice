bool find3Numbers(int arr[], int n, int X)
    {
        //Your Code Here
        sort(arr,arr+n);
        int i=0,j=1,k=n-1;
        while (i<k)
        {
            if (j<k)
            {
                int summer=arr[i]+arr[j]+arr[k];
            if (summer>X)
            {
                k--;
            }
            else if (summer<X)
            {
                j++;   
            } 
            else if (summer==X)
            {
                return 1;
            }
            }
            else
                {
                    i+=1;
                    j=i+1;
                    k=n-1;
                }
            
        }
        return 0;
    }

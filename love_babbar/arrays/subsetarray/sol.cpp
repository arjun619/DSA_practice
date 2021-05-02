string isSubset(int a1[], int a2[], int n, int m) {
    int freqa1[100001]={0};
    for(int i=0;i<n;i++)
    {
        freqa1[a1[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        if (freqa1[a2[i]]<=0)
            return "No";
        else
        {
            freqa1[a2[i]]--;
        }
    }
    return "Yes";
    

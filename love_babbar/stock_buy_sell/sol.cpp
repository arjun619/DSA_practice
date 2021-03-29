int maxProfit(vector<int>& arr) {
        int mini=arr[0];
        int res=0;
        for(int i=1;i<arr.size();i++)
        {
            if ((arr[i]-mini)>res)
                res=arr[i]-mini;
            else if (arr[i]-mini<0)
                mini=arr[i];
        }
        return res;
    }

#include <bits/stdc++.h>

using namespace std;

int getmax(vector<int>arr,int low,int higher)
{
    if (low>higher)
        return -1;
    if (low==higher)
        return arr[low];
    else if (higher==low+1)
    {
            if (arr[higher]>arr[low])
                return arr[higher];
            else
                return arr[low];
    }
    else
    {
        int mid=(higher-low)/2;
        return max(getmax(arr,low,mid),getmax(arr,mid+1,higher));
    }
}

int main()
{
    vector<int>arr{2,4,1,3,5};
    cout<<getmax(arr,0,arr.length()-1);
    return 0;


}


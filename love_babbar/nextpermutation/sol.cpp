#include <bits/stdc++.h>

using namespace std;
vector<int> partialsorter(vector<int>arr,int start,int ends)
{
    for(int i=start;i<ends;i++)
    {
        for(int j=start;j<ends;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return arr;
}
void nextperm(vector<int>arr)
{
    int flag=0;
    int flag1=0,i;
    int myindex=-1;
    for(i=arr.size()-2;i>-1;i--)
    {
        if (arr[i]<arr[i+1])
        {
            int flag=arr[i];
            //int myindex=-1;
            int smallest_big=INT_MAX;
            for(int j=arr.size()-1;j>i;j--)
            {
                if (arr[j]>flag && arr[j]<smallest_big)
                {
                    smallest_big=arr[j];
                    myindex=j;
                }
            }
            int temp=arr[i];
            arr[i]=arr[myindex];
            arr[myindex]=temp;
            flag1=1;
        }

    }
    int start=i+1;
    int ends=arr.size();
    for(int x=start;x<ends;x++)
    {
        for(int y=start;y<ends;y++)
        {
            if (arr[y]>arr[y+1])
            {
                int temp=arr[y];
                arr[y]=arr[y+1];
                arr[y+1]=temp;
            }
        }
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int>arr={1,3,2};
    nextperm(arr);
}


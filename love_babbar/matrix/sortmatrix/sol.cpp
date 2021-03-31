#include <bits/stdc++.h>

using namespace std;
vector<int> mergeoperation(vector<int>arr1,vector<int>arr2)
{
    int i=0,j=0,k=0;
    vector<int>temp;
    while (i<arr1.size() && j<arr2.size())
    {
        if (arr1[i]>arr2[j])
        {
            temp.push_back(arr2[j]);
            j++;
        }
        else
        {
            temp.push_back(arr1[i]);
            i++;
        }
    }
    while (i<arr1.size())
    {
        temp.push_back(arr1[i]);
        i++;
    }
    while(j<arr2.size())
    {
        temp.push_back(arr2[j]);
        j++;
    }
    return temp;
}
vector<int> sortmatrix(vector<vector<int>>arr)
{
    vector<int>temp =mergeoperation(arr[0],arr[1]);
    for(int i=2;i<arr.size();i++)
    {
        temp= mergeoperation(temp,arr[i]);

    }
    return temp;
}
int main()
{
    vector<vector<int>>arr={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    vector<int>ans=sortmatrix(arr);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}


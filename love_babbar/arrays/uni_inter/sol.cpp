#include <bits/stdc++.h>

using namespace std;

void unions(vector<int>a1,vector<int>a2)
{
    int i=0,j=0;
    vector<int>uni;
    while(i<a1.size() && j<a2.size())
    {
        if (a1[i]>a2[j])
        {
            uni.push_back(a2[j]);
            cout<<"he";
            j+=1;
        }
        else if (a1[i]<a2[j])
        {
            uni.push_back(a1[i]);
            i+=1;
        }
        else
        {
            uni.push_back(a1[i]);
            i+=1;
            j+=1;
        }
    }
    if (!j<a2.size())
    {
        while(j<a2.size())
        {
            uni.push_back(a2[j]);
        j+=1;
        }

    }
    if (!i<a1.size())
    {
        while(i<a1.size())
        {
            uni.push_back(a1[i]);
        i+=1;
        }

    }
    for(int i=0;i<uni.size();i++)
    {
        cout<<uni[i]<<" ";
    }
}

void intersection(vector<int>a1,vector<int>a2)
{
   int i=0,j=0;
    vector<int>inter;
    while(i<a1.size() && j<a2.size())
    {
        if (a1[i]>a2[j])
        {
            j+=1;
        }
        else if (a1[i]<a2[j])
        {
            i+=1;
        }
        else
        {
            inter.push_back(a1[i]);
            i+=1;
            j+=1;
        }
    }

    for(int i=0;i<inter.size();i++)
    {
        cout<<inter[i]<<" ";
    }
}
int main()
{
    vector<int>a1{1,2,3,4,5};
    vector<int>a2{-9,1,2,3,11};
    //unions(a1,a2);


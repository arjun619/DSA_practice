#include <bits/stdc++.h>
#include<string.h>
#include<string>
using namespace std;
int medianfinder(vector<int>arr1,vector<int>arr2)
{
    int counts=0;
    int n1=arr1.size();
    int n2=arr2.size();
    vector<int>sol;
    int n=n1+n2;
    int i=0,j=0;
    if (n%2==0)
    {
        while (counts!=n/2)
        {

            if (arr1[i]>arr2[j])
            {
                j++;
                counts++;
                sol.push_back(arr2[j]);

            }
            else
            {
                i++;
                counts++;
                sol.push_back(arr1[i]);
            }
        }
        /*for(int i=0;i<sol.size();i++)
            cout<<sol[i]<<"\n";*/
        //cout<<counts<<"\n";
        return sol[counts-1];
    }
    else
    {
        int i=0,j=0;
        while (counts<(n+1)/2)
        {

            if (arr1[i]>arr2[j])
            {
                j++;
                counts++;
                sol.push_back(arr2[j]);

            }
            else
            {
                i++;
                counts++;
                sol.push_back(arr1[i]);
            }

        }
        //cout<<sol[counts-2]<<" "<<sol[counts-1];
        for(int i=0;i<sol.size();i++)
            cout<<sol[i]<<"\n";
        return (float(sol[counts-2])+float(sol[counts-1]))/2;
    }
}
int main()
{
     vector<int>ar1= {-5, 3, 6, 12, 15};
    vector<int>ar2={-12, -10, -6, -3, 4, 10};
    cout<<medianfinder(ar1,ar2);
}


#include <bits/stdc++.h>

using namespace std;
int allpartitions(string arr)
{
    int freq[2]={0,0};
    int counts=0;
    for(int i=0;i<arr.length();i++)
    {
        if (arr[i]=='1')
                freq[1]++;
        else if (arr[i]=='0')
                freq[0]++;
        if (freq[0]==freq[1])
            counts++;

    }
    return counts;
}
int main()
{
    cout<<allpartitions("0100110101");
}


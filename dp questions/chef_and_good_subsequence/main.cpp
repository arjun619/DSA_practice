#include <iostream>

using namespace std;

int main()
{
    int n=8000,flag=0,k=0;
    int arr[8000]={};

    for(int i=2;i<=8000;i++)
    {

        for(int j=2;j<i/2+1;j++)
        {
           // cout<<"t";
            if (i%j==0)
            {
                flag=1;
                break;
            }

        }
        if (flag==0)
            arr[k++]=i;
        flag=0;
    }
    for(int i=0;i<1000;i++)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;
}

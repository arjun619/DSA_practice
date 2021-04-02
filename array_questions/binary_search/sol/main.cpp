#include <iostream>

using namespace std;
int binary_search(int* arr,int start,int ends,int finder)
{
    if (start>=ends)
        return -1;
    else
    {
        int mid= (start+ends)/2;
        if (arr[mid]==finder)
            return mid;
        else if (arr[mid]>finder)
            return binary_search(arr,start,mid,finder);
        else if (arr[mid]<finder)
            return binary_search(arr,mid+1,ends,finder);

    }
}
int main()
{
    //cout << "Hello world!" << endl;
    int arr[5]={24,45,63,99,105};
    int ans=binary_search(arr,0,5,99);
    if (ans!=-1)
        cout<<"Element found at "<<ans;
    else
        cout<<"element not found ";
    return 0;
}

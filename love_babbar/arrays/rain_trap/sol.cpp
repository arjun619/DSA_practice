#include <bits/stdc++.h>
using namespace std;
int trappingWater(int arr[], int n){
        // Code here
        int sums=0;
        int tempsum=0;
        int cur=arr[0];
        for(int i=1;i<n;i++)
        {
            if (arr[i]<cur)
            {
                tempsum+=cur-arr[i];
            }
            else
            {
                if (tempsum>sums)
                    sums=tempsum;
                tempsum=0;
                cur=arr[i];
            }
        }
        return sums;
    }
int main() {
	// your code goes here
    int arr[]={3,0,0,2,0,4};
    int arr1[]={6,6,9};
	cout<<trappingWater(arr1,3);
}


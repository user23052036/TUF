#include<bits/stdc++.h>
using namespace std;

int printF(int indx, int *arr, int sum, int k, int n)
{
    if(sum>k) return 0;
    if(indx==n)
    {
        if(k == sum)
            return 1;
        return 0;
    }

    //pick or take condition
    sum += arr[indx];
    int left = printF(indx+1,arr,sum,k,n);
    sum -= arr[indx];

    //not pick or not take condition
    int right = printF(indx+1,arr,sum,k,n);

    return (left+right);
}

int main()
{
    int arr[]={3,1,2};
    int k=3;

    cout<<printF(0,arr,0,k,3);
    return 0;
}
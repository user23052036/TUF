#include<bits/stdc++.h>
using namespace std;

void printF(int indx, int *arr, int ini_sum, int sum, vector<int> &vec, int n)
{
    if(indx==n)
    {
        if(ini_sum == sum)
            for(auto it:vec)
                cout<<it<<" ";
        return;
    }

    //pick or take condition
    vec.emplace_back(arr[indx]);
    ini_sum += arr[indx];
    printF(indx+1,arr,ini_sum,sum,vec,n);
    vec.pop_back();
    ini_sum -= arr[indx];

    //not pick or not take condition
    printF(indx+1,arr,ini_sum,sum,vec,n);
}

int main()
{
    int arr[]={3,1,2};
    vector<int>vec;
    int k=3;

    printF(0,arr,0,k,vec,3);
    return 0;
}
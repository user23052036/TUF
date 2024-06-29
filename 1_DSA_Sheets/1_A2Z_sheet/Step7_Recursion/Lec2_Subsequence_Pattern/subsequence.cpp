#include<bits/stdc++.h>
using namespace std;

void printF(int indx, int *arr, vector<int> &vec, int n)
{
    if(indx==n)
    {
        for(auto it:vec)
            cout<<it<<" ";
        cout<<"\n";
        return;
    }

    //not pick or not take condition
    printF(indx+1,arr,vec,n);

    //pick or take condition
    vec.emplace_back(arr[indx]);
    printF(indx+1,arr,vec,n);
    vec.pop_back();
}

int main()
{
    int arr[]={3,1,2};
    vector<int>vec;

    printF(0,arr,vec,3);
    return 0;
}
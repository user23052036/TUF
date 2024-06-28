#include<bits/stdc++.h>
using namespace std;


void bubble_recursion(vector<int> &arr, int last)
{
    if(last == 0)
        return;
    
    for(int i=0; i<last; i++)
    {
        if(arr[i] > arr[i+1])
        {
            arr[i]=arr[i]+arr[i+1];
            arr[i+1]=arr[i]-arr[i+1];
            arr[i]=arr[i]-arr[i+1];
        }
    }
    bubble_recursion(arr,last-1);
}

int main()
{
    int n;
    cout<<"Enter the size of array:--->";
    cin>>n;
    vector<int>arr;
    cout<<"Enter the elements of the array:--->";
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        arr.emplace_back(x);
    }

    bubble_recursion(arr,arr.size()-1);
    for(auto it:arr)
        cout<<it<<" ";

    return 0;
}
#include<bits/stdc++.h>
using namespace std;


void insertion_recursion(vector<int> &arr, int last) //reference type variable
{
    if(last==0)
        return;
    insertion_recursion(arr,last-1); //sorting n-1
    
    int i,temp=arr[last];
    for(i=last-1; i>=0 && arr[i]>temp; i--)
        arr[i+1]=arr[i];
    arr[i+1]=temp;
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

    insertion_recursion(arr,arr.size()-1);
    for(auto it:arr)
        cout<<it<<" ";

    return 0;
}
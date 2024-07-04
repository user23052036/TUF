#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>>result;
    int arr[]={1,2,3}, size=3;
    int limit = 1<<size;

    for(int num=0; num<limit; num++)
    {
        vector<int>vec;
        for(int bit=0; bit<size; bit++)
        {
            if(num & (1<<bit))              //set then push back into vec
                vec.push_back(arr[bit]);   
        }
        result.push_back(vec);              //pushing vector to result
    }

    for(auto it: result)
    {
        for(auto member: it)
            cout<<member<<" ";
        cout<<"\n";
    }

    return 0;
}